#include "parse_sprintf.h"

char *parse_tockens(param_t *param, char *c) {
  c++;

  if (*c == '-' || *c == '+' || *c == ' ' || *c == '0' || *c == '#') {
    while (((*c == '-') || (*c == '+') || (*c == ' ') || (*c == '0') ||
            (*c == '#')) &&
           *c) {
      if (*c == '-') param->flags[sub] = 1;
      if (*c == '+') param->flags[plus] = 1;
      if (*c == ' ') param->flags[none] = 1;
      if (*c == '0') param->flags[zero] = 1;
      if (*c == '#') param->flags[hash] = 1;
      c++;
    }
  }
  if ((*c >= '1' && *c <= '9') || *c == '*') {
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

  if (*c == '.') {
    c++;
    if (*c == '*') {
      param->precision = -1;
      c++;
    } else {
      while (isDigit(*c) && *c) {
        param->precision *= 10;
        param->precision += (*c - '0');
        c++;
      }
      if (param->precision == 0) param->precision = -2;
    }
  }

  if (*c == 'L' || *c == 'h' || *c == 'l') {
    while ((*c == 'L' || *c == 'h' || *c == 'l')) {
      if (*c == 'L') {
        param->lengths = *c;
      }
      if (param->lengths != 'L') {
        if (*c == 'l') {
          param->lengths = *c;
        }
        if (param->lengths != 'l') {
          if (*c == 'h') {
            param->lengths = *c;
          }
        }
      }

      c++;
    }
  }

  if (*c == 'o' || *c == 'd' || *c == 'x' || *c == 'X') {
    param->specifier = *c;
    if (param->precision != 0) param->flags[zero] = 0;
  } else if (*c == 'u' || *c == 'n' || *c == '%' || *c == 'p' || *c == 'i') {
    param->specifier = *c;
    if (param->precision != 0) param->flags[zero] = 0;
  } else if (*c == 's' || *c == 'c' || *c == 'f') {
    param->specifier = *c;
  } else if (*c == 'e' || *c == 'E' || *c == 'g' || *c == 'G') {
    param->specifier = *c;
  } else
    c = s21_NULL;
  return c;
}

void tocen_is_er(param_t *n) {
  n->lengths = 0;

  n->precision = 0;
  n->width = 0;
  n->specifier = 0;

  for (int i = 0; i < 5; i++) n->flags[i] = 0;
}
