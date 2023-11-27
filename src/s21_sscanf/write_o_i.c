#include "../s21_string.h"
#include "s21_sscanf.h"

char *write_o(char *buff, char *str, va_list next_var, param_t *p) {
  int *pdec = s21_NULL;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, int *);
  k = prce_o(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      *pdec = (int)s21_strtol(buff, 8);
    }
  }
  return k;
}

char *write_ho(char *buff, char *str, va_list next_var, param_t *p) {
  short int *pdec = s21_NULL;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, short int *);
  k = prce_o(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      *pdec = (short)s21_strtol(buff, 8);
    }
  }
  return k;
}

char *write_lo(char *buff, char *str, va_list next_var, param_t *p) {
  long int *pdec = s21_NULL;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, long int *);
  k = prce_o(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      *pdec = (long)s21_strtol(buff, 8);
    }
  }
  return k;
}

char *write_li(char *buff, char *str, va_list next_var, param_t *p) {
  long *pdec = s21_NULL;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, long *);
  k = prce_i(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      *pdec = (long)s21_strtoall(buff);
    }
  }
  return k;
}

char *write_i(char *buff, char *str, va_list next_var, param_t *p) {
  int *pdec = s21_NULL;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, int *);
  k = prce_i(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      *pdec = (int)s21_strtoall(buff);
    }
  }
  return k;
}

char *write_hi(char *buff, char *str, va_list next_var, param_t *p) {
  short int *pdec = s21_NULL;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, short int *);
  k = prce_i(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      *pdec = (short)s21_strtoall(buff);
    }
  }
  return k;
}

char *write_x(char *buff, char *str, va_list next_var, param_t *p) {
  int *pdec = s21_NULL;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, int *);
  k = prce_x(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      *pdec = (int)s21_strtoi(buff, 16);
    }
  }
  return k;
}

char *write_lx(char *buff, char *str, va_list next_var, param_t *p) {
  long *pdec = s21_NULL;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, long *);
  k = prce_x(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      *pdec = (long)s21_strtol(buff, 16);
    }
  }
  return k;
}

char *write_hx(char *buff, char *str, va_list next_var, param_t *p) {
  short *pdec = s21_NULL;
  char *k = s21_NULL;
  if (p->width != -1) pdec = va_arg(next_var, short *);
  k = prce_x(str, buff, p);
  if (p->width != -1) {
    if (k != s21_NULL) {
      *pdec = (short)s21_strtoi(buff, 16);
    }
  }
  return k;
}
