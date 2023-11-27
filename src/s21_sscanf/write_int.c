#include "../s21_string.h"
#include "s21_sscanf.h"

char *write_int(char *buff, char *str, va_list next_var, param_t *p) {
  int *pdec = s21_NULL;
  char *k = s21_NULL;

  if (p->width != -1) pdec = va_arg(next_var, int *);
  k = prce_d(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      if (s21_strlen(buff) > 19)
        *pdec = -1;
      else
        *pdec = s21_strtol(buff, 0);
    }
  }
  return k;
}

char *write_l_int(char *buff, char *str, va_list next_var, param_t *p) {
  long *pdec = s21_NULL;
  char *k = s21_NULL;

  if (p->width != -1) pdec = va_arg(next_var, long *);
  k = prce_d(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      *pdec = s21_strtol(buff, 0);
      ;
    }
  }
  return k;
}

char *write_h_int(char *buff, char *str, va_list next_var, param_t *p) {
  short *pdec = s21_NULL;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, short *);
  k = prce_d(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      *pdec = s21_strtol(buff, 0);
      ;
    }
  }
  return k;
}

char *write_u(char *buff, char *str, va_list next_var, param_t *p) {
  unsigned int *pdec = s21_NULL;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, unsigned int *);

  k = prce_d(str, buff, p);

  if (p->width != -1) {
    if (k != s21_NULL) {
      *pdec = s21_atoull(buff);
    }
  }
  return k;
}

char *write_lu(char *buff, char *str, va_list next_var, param_t *p) {
  unsigned long *pdec = s21_NULL;
  char *k = s21_NULL;

  if (p->width != -1) pdec = va_arg(next_var, unsigned long *);
  k = prce_d(str, buff, p);

  if (p->width != -1) {
    if (k != s21_NULL) {
      *pdec = s21_atoull(buff);
    }
  }
  return k;
}

char *write_hu(char *buff, char *str, va_list next_var, param_t *p) {
  unsigned short *pdec = s21_NULL;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, unsigned short *);
  k = prce_d(str, buff, p);

  if (p->width != -1) {
    if (k != s21_NULL) {
      *pdec = s21_atoull(buff);
    }
  }
  return k;
}
