#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "../s21_string.h"
#include "parse_sprintf.h"
#include "s21_sprintf_lib.h"
#include "s21_sprintf_process.h"

int case_specifer(param_t param, va_list args, char *str, char *p, char **c);
long int processing_args(param_t param, va_list args, int *length,
                         char *str_num);
long int processing_args_for_int(param_t param, va_list args, int *length,
                                 char *str_num, int *negative);

// int main() {
//   char *str = malloc(sizeof(char) * 1000);
//   char *str1 = malloc(sizeof(char) * 1000);
//   int i = 348756923;
//   double f = 384563245.38457234875;
//   char s[] = "eirfgheuwrg 84569823745 ewrfghewur";
//   char c = 'c';
//   int n = 0;
//   int n1 = 0;

//   sprintf(str, "%d%x%u%o%c%s%f%e%f%n%%", i, i, i, i, c, s, f, f, f, &n);
//   s21_sprintf(str1, "%d%x%u%o%c%s%f%e%f%n%%", i, i, i, i, c, s, f, f, f,
//   &n1);
//   // printf("%s\n", str);
//   // printf("%s\n", str1);
//   free(str);
//   free(str1);

//   return 0;
// }

int s21_sprintf(char *str, const char *format, ...) {
  char *p = str;
  str[0] = '\0';
  va_list args;
  va_start(args, format);
  param_t param;
  char *c = (char *)format;

  while (*c != '\0') {
    tocen_is_er(&param);
    if (*c == '%') {
      c = parse_tockens(&param, c);
      str += (case_specifer(param, args, str, p, &c) - 1);

    } else {
      write_char_sprintf(str, *c);
      str++;
    }
    if (c == s21_NULL) break;
    c++;
  }
  va_end(args);
  return s21_strlen(str) + 1;
}

int case_specifer(param_t param, va_list args, char *str, char *p, char **c) {
  int length = 0;
  int negative = 0;
  int shift = 0;
  if (param.specifier == '%') {
    shift = process_int("%", str, param, 1, negative);
  } else if (param.specifier == 'n') {
    unsigned long int *num = (unsigned long int *)va_arg(args, unsigned long);
    *num = s21_strlen(p);
  } else {
    if (param.width == -1) {
      param.width = va_arg(args, int);
    }
    if (param.precision == -1) {
      param.precision = va_arg(args, int);
    }
    char *str_num = malloc(sizeof(char) * 1);
    if (param.specifier == 'i' || param.specifier == 'd') {
      long int num =
          processing_args_for_int(param, args, &length, str_num, &negative);
      if (!(param.precision == -2 && num == 0))
        shift = process_int(str_num, str, param, length, negative);
    } else if (param.specifier == 'u' || param.specifier == 'o' ||
               param.specifier == 'x' || param.specifier == 'X' ||
               param.specifier == 'p') {
      unsigned long int num = processing_args(param, args, &length, str_num);
      if (!(param.precision == -2 && num == 0))
        shift = process_int(str_num, str, param, length, negative);
    } else if (param.specifier == 's') {
      process_s(str, param, va_arg(args, char *));
      shift = s21_strlen(str) + 1;
    } else if (param.specifier == 'c') {
      if (process_c(str, param, va_arg(args, int))) *c = s21_NULL;
      shift = s21_strlen(str) + 1;
    } else if (param.specifier == 'f') {
      process_f(str, param, va_arg(args, double));
      shift = s21_strlen(str) + 1;
    } else if (param.specifier == 'e') {
      long double num = 0;
      if (param.lengths == 'L')
        num = va_arg(args, long double);
      else
        num = va_arg(args, double);
      process_e(str, param, num, false, false);
      shift = s21_strlen(str) + 1;
    } else if (param.specifier == 'E') {
      long double num = 0;
      if (param.lengths == 'L')
        num = va_arg(args, long double);
      else
        num = va_arg(args, double);
      process_e(str, param, num, true, false);
      shift = s21_strlen(str) + 1;
    }

    free(str_num);
  }

  return shift;
}

long int processing_args_for_int(param_t param, va_list args, int *length,
                                 char *str_num, int *negative) {
  long int num = 0;
  if (param.lengths == 'l') {
    num = va_arg(args, long);
  } else if (param.lengths == 'h') {
    num = (long int)(short int)va_arg(args, int);
  } else {
    num = (long int)va_arg(args, int);
  }

  *length = length_int(num);
  if (num < 0) *negative = 1;

  str_num = realloc(str_num, sizeof(char) * *length);
  int_to_str(num, str_num);
  return num;
}

long int processing_args(param_t param, va_list args, int *length,
                         char *str_num) {
  unsigned long int unnum = 0;
  int reg = 0;
  if (param.specifier == 'x' || param.specifier == 'p') reg = 32;
  if (param.specifier == 'p') {
    unnum = va_arg(args, unsigned long);
  } else {
    if (param.lengths == 'h') {
      unnum = (unsigned long int)(unsigned short int)va_arg(args, unsigned int);
    } else if (param.lengths == 'l') {
      unnum = va_arg(args, unsigned long);
    } else {
      unnum = (unsigned long int)va_arg(args, unsigned int);
    }
  }

  *length = length_int(unnum);

  str_num = realloc(str_num, sizeof(char) * *length);
  str_num[0] = '\0';
  if (param.specifier == 'o') {
    converter_from_10(str_num, unnum, 8, length, reg);
  } else if (param.specifier == 'x' || param.specifier == 'X') {
    converter_from_10(str_num, unnum, 16, length, reg);
  } else if (param.specifier == 'p') {
    converter_from_10(str_num, unnum, 16, length, reg);
  } else {
    int_to_str(unnum, str_num);
  }
  return unnum;
}
