#include "../s21_string.h"
#include "s21_sscanf.h"

char *write_f(char *buff, char *str, va_list next_var, param_t *p) {
  float *pdec = s21_NULL;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, float *);
  k = prce_f(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      if (!s21_strncmp(buff, "inf", 3))
        *pdec = INFINITY;
      else if (!s21_strncmp(buff, "nan", 3))
        *pdec = NAN;
      else if (!s21_strncmp(buff, "-inf", 4))
        *pdec = -INFINITY;
      else
        *pdec = s21_atof(buff);
    }
  }
  return k;
}

char *write_lf(char *buff, char *str, va_list next_var, param_t *p) {
  double *pdec = s21_NULL;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, double *);
  k = prce_f(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      if (!s21_strncmp(buff, "inf", 3))
        *pdec = INFINITY;
      else if (!s21_strncmp(buff, "nan", 3))
        *pdec = NAN;
      else if (!s21_strncmp(buff, "-inf", 4))
        *pdec = -INFINITY;
      else
        *pdec = s21_atof(buff);
    }
  }
  return k;
}

char *write_Lf(char *buff, char *str, va_list next_var, param_t *p) {
  long double *pdec = s21_NULL;
  ;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, long double *);
  k = prce_f(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      if (!s21_strncmp(buff, "inf", 3))
        *pdec = INFINITY;
      else if (!s21_strncmp(buff, "nan", 3))
        *pdec = NAN;
      else if (!s21_strncmp(buff, "-inf", 3))
        *pdec = -INFINITY;
      else
        *pdec = s21_atof(buff);
    }
  }
  return k;
}
