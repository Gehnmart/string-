#include "s21_sscanf.h"

#include <stdio.h>

#include "../s21_string.h"

#define s21_EOF -1

static int isDigit(char ch) { return (ch >= '0' && ch <= '9'); }

static void tocen_is_er(param_t *n) {
  n->lengths = 0;
  n->space = 0;
  n->width = 0;
  n->specifier = 0;
}

static char *parse_tockens(param_t *param, char *c) {
  c++;
  if ((*c >= '0' && *c <= '9') || *c == '*') {
    if (*c == '*') {
      param->width = -1;
      c++;
    } else {
      while (isDigit(*c) && *c) {
        param->width *= 10;
        param->width += (*c - '0');
        c++;
      }
    }
  }

  if (*c == 'L' || *c == 'h' || *c == 'l') {
    while ((*c == 'L' || *c == 'h' || *c == 'l')) {
      if (*c == 'L') {
        param->lengths = *c;
      }
      if (param->lengths != 'L') {
        if (*c == 'h') {
          param->lengths = *c;
        }
        if (param->lengths != 'h') {
          if (*c == 'l') {
            param->lengths = *c;
          }
        }
      }

      c++;
    }
  }

  if (*c == 'c' || *c == 'd' || *c == 'e' || *c == 'E') {
    param->specifier = *c;
    c++;
  } else if (*c == 'f' || *c == 'g' || *c == 'G' || *c == 'o') {
    param->specifier = *c;
    c++;
  } else if (*c == 's' || *c == 'u' || *c == 'x' || *c == 'X') {
    param->specifier = *c;
    c++;
  } else if (*c == 'p' || *c == 'n' || *c == 'i' || *c == '%') {
    param->specifier = *c;
    c++;
  } else
    c = s21_NULL;
  return c;
}

static void skip_str(char **c, const char **str1, param_t *param) {
  char **str = (char **)str1;
  for (; *(*c) && *(*c) != '%';) {
    if (*(*c) == *(*str) && *(str[0]) != '\0') {
      (*c)++, (*str)++;
      param->n_specik++;
      continue;
    }
    if ((*(*str) == ' ') && *(str[0]) != '\0') {
      (*str)++;
      param->n_specik++;
      continue;
    }
    if (*(*c) == ' ' || *(*c) == '\n' || *(*c) == '\t') {
      (*c)++;
      continue;
    }
    if (*(*c) != *(*str) && *(str[0]) != '\0') {
      *c = s21_NULL;
      break;
    }
    (*c)++;
  }
}

void rot_na_oborot(const char *str, int *res) {
  for (char *p = (char *)str;; p++) {
    if (*p == ' ') continue;
    if (*p == '\0') {
      *res = -1;
      break;
    }
    break;
  }
}

int s21_sscanf(const char *str, const char *format, ...) {
  if (format == s21_NULL || format[0] == '\0') return 0;
  if (str == s21_NULL) return 0;
  int id = 0, res = 0;
  va_list next_var;
  va_start(next_var, format);
  param_t param = {0};
  char mass[BUFF_MAX] = {'\0'};
  char *buff = (char *)mass;
  char *c = (char *)format;

  for (char prev_c = 0; *c;) {
    tocen_is_er(&param);
    if (*c == ' ' || *c == '\t' || *c == '\n') {
      prev_c = *c;
      c++;
      continue;
    }
    if (*c != '%') {
      skip_str(&c, &str, &param);
    }
    if (c == s21_NULL) break;
    if (*c == '\0' && *str == '\0') {
      res = -1;
      break;
    }
    if (*c == '%') {
      if (prev_c == ' ' || prev_c == '\t' || prev_c == '\n') param.space = 1;
      c = parse_tockens(&param, c);
      if (str[0] == '\0' && param.specifier != 'n' && !id) {
        res = -1;
        break;
      }
      if (param.specifier != 'n' && !id) {
        rot_na_oborot(str, &res);
      }
      if (res == -1) break;
      id = 1;
      if (c == s21_NULL) break;
      switch (param.specifier) {
        case 'd':
          if (param.lengths == 0)
            str = write_int(buff, (char *)str, next_var, &param);
          if (param.lengths == 'h')
            str = write_h_int(buff, (char *)str, next_var, &param);
          if (param.lengths == 'l')
            str = write_l_int(buff, (char *)str, next_var, &param);
          break;
        case 'c':
          str = write_char(buff, (char *)str, next_var, &param);
          break;
        case 's':
          str = write_str(buff, (char *)str, next_var, &param);
          break;
        case 'o':
          if (param.lengths == 0)
            str = write_o(buff, (char *)str, next_var, &param);
          if (param.lengths == 'l')
            str = write_lo(buff, (char *)str, next_var, &param);
          if (param.lengths == 'h')
            str = write_ho(buff, (char *)str, next_var, &param);
          break;
        case 'i':
          if (param.lengths == 0)
            str = write_i(buff, (char *)str, next_var, &param);
          if (param.lengths == 'l')
            str = write_li(buff, (char *)str, next_var, &param);
          if (param.lengths == 'h')
            str = write_hi(buff, (char *)str, next_var, &param);
          break;
        case 'u':
          if (param.lengths == 0)
            str = write_u(buff, (char *)str, next_var, &param);
          if (param.lengths == 'h')
            str = write_hu(buff, (char *)str, next_var, &param);
          if (param.lengths == 'l')
            str = write_lu(buff, (char *)str, next_var, &param);
          break;
        case 'x':
        case 'X':
          if (param.lengths == 0)
            str = write_x(buff, (char *)str, next_var, &param);
          if (param.lengths == 'l')
            str = write_lx(buff, (char *)str, next_var, &param);
          if (param.lengths == 'h')
            str = write_hx(buff, (char *)str, next_var, &param);
          break;
        case 'g':
        case 'G':
        case 'e':
        case 'E':
        case 'f':
          if (param.lengths == 0)
            str = write_f(buff, (char *)str, next_var, &param);
          if (param.lengths == 'L')
            str = write_Lf(buff, (char *)str, next_var, &param);
          if (param.lengths == 'l')
            str = write_lf(buff, (char *)str, next_var, &param);
          if (param.lengths == 'h') c = s21_NULL;
          break;
        case 'n':
          str = write_n(next_var, &param, (char *)str);
          break;
        case 'p':
          str = write_p(buff, (char *)str, next_var, &param);
          break;
        case '%':
          str = parse_procent((char *)str, &param);
          break;
      }
      if (c == s21_NULL) break;
      if (str == s21_NULL) break;
      if (param.specifier != 'n' && param.width != -1 && param.specifier != '%')
        res++;
    }
  }
  va_end(next_var);
  return res;
}
