#include "s21_sprintf_lib.h"

#include "parse_sprintf.h"

void write_char_sprintf(char *str, char c) {
  char s[2] = "\0\0";
  s[0] = c;
  s21_strcat(str, s);
}

int length_int(long int num) {
  int length = 1;
  if (num < 0) num = -num;
  while (num > 9) {
    num /= 10;
    length++;
  }

  return length;
}

void int_to_str(long int num, char *str) {
  int length = length_int(num);
  if (num < 0) num = -num;
  char temp_str[BUFF_MAX] = {0};
  for (int i = length - 1; i >= 0; i--) {
    temp_str[i] = num % 10 + '0';
    num /= 10;
  }

  temp_str[length] = '\0';
  s21_strcat(str, (char *)temp_str);
}

void check_flags(param_t param, char sign[2], int *count, int negative,
                 char flag_o_x[3], char aggregate[2], int *precision) {
  if (param.flags[zero] && !param.flags[sub]) aggregate[0] = '0';
  if (param.specifier != 'u' && param.specifier != 'o' &&
      param.specifier != 'x' && param.specifier != 'X' &&
      param.specifier != 'p' && param.specifier != '%') {
    if (param.flags[plus]) {
      if (negative)
        sign[0] = '-';
      else
        sign[0] = '+';
      *count -= 1;
    } else if (param.flags[none]) {
      if (negative)
        sign[0] = '-';
      else
        sign[0] = ' ';
      *count -= 1;
    } else {
      if (negative) {
        sign[0] = '-';
        *count -= 1;
      }
    }
  }
  if (param.flags[hash] && param.specifier != 'p') {
    if (param.specifier == 'o') {
      flag_o_x[0] = '0';
      if (*precision > 0)
        *precision -= 1;
      else
        *count -= 1;
    }
    if (param.specifier == 'x') {
      flag_o_x[0] = '0';
      flag_o_x[1] = 'x';
      *count -= 2;
    }
    if (param.specifier == 'X') {
      flag_o_x[0] = '0';
      flag_o_x[1] = 'X';
      *count -= 2;
    }
  }
  if (param.specifier == 'p') {
    flag_o_x[0] = '0';
    flag_o_x[1] = 'x';
    *count -= 2;
  }
}

void converter_from_10(char *num_str, unsigned long int num, int base,
                       int *length, int reg) {
  char mass[BUFF_MAX] = {0};
  *length = 0;
  while (num >= (unsigned long int)base) {
    int oct = (num % base);
    case_letter(oct, mass, length, reg);
    num /= base;
  }
  case_letter(num, mass, length, reg);
  char mass2[BUFF_MAX] = {0};
  for (int i = 0; i < *length; i++) {
    mass2[i] = mass[*length - 1 - i];
  }
  mass2[*length] = '\0';

  s21_strcat(num_str, mass2);
}

void case_letter(int oct, char *mass, int *k, int reg) {
  if (oct > 9 && oct < 16) {
    switch (oct) {
      case 10:
        mass[(*k)++] = 'A' + reg;
        break;
      case 11:
        mass[(*k)++] = 'B' + reg;
        break;
      case 12:
        mass[(*k)++] = 'C' + reg;
        break;
      case 13:
        mass[(*k)++] = 'D' + reg;
        break;
      case 14:
        mass[(*k)++] = 'E' + reg;
        break;
      case 15:
        mass[(*k)++] = 'F' + reg;
        break;
    }
  } else {
    mass[(*k)++] = oct + '0';
  }
}

void s21_strcat(char *dest, const char *src) {
  while (*dest) {
    dest++;
  }
  while (*src != '\0') {
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '\0';
}

int f_len(double value) {
  int ans = 0;

  if (value < 0) value = -value;

  while (value >= 1) {
    value /= 10;
    ans += 1;
  }

  return ans;
}

int strlenw(wchar_t *str) {
  int i = 0;
  for (; *str; ++str) {
    ++i;
  }
  return i;
}
