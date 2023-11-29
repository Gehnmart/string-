#ifndef PARSE_H
#define PARSE_H
#include <stdlib.h>

#include "../s21_string.h"

#define BUFF_MAX 8192
#define isDigit(x) (x >= '0' && x <= '9')

typedef struct {
  int width;
  char lengths;
  int precision;
  char flags[5];
  char specifier;
} param_t;

enum name_flags {
  sub,
  plus,
  none,
  zero,
  hash,
};

char *parse_tockens(param_t *param, char *c);
void tocen_is_er(param_t *n);

#endif /*PARSE_H*/
