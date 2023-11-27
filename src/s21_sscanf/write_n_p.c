#include "../s21_string.h"
#include "s21_sscanf.h"

char *write_p(char *buff, char *str, va_list next_var, param_t *p) {
  int **pdec = s21_NULL;
  char *k = s21_NULL;
  pdec = va_arg(next_var, int **);
  k = prce_x(str, buff, p);
  unsigned long a = s21_strtol(buff, 16);
  if (k != s21_NULL) {
    *pdec = (int *)a;
  }
  return k;
}

char *write_n(va_list next_var, param_t *p, char *str) {
  int *pdec = s21_NULL;
  for (; *str == ' '; str++) p->n_specik++;
  pdec = va_arg(next_var, int *);
  *pdec = p->n_specik;
  return str;
}
