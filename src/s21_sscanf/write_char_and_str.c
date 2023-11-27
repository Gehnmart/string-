#include "../s21_string.h"
#include "s21_sscanf.h"

char *write_char(char *buff, char *str, va_list next_var, param_t *p) {
  char *pdec = s21_NULL;
  char *res = s21_NULL;
  wchar_t *wp = s21_NULL;
  if (p->width != -1) {
    if (p->lengths == 0) pdec = va_arg(next_var, char *);
    if (p->lengths == 'l') wp = va_arg(next_var, wchar_t *);
  }
  res = prce_chr(str, buff, p);
  if (p->width != -1) {
    if (p->width > 0) {
      if (res != s21_NULL) {
        if (p->lengths == 'l') mbstowcs(wp, buff, s21_strlen(buff));
        if (p->lengths == 0) s21_memcpy(pdec, buff, s21_strlen(buff));
      }
    } else if (res != s21_NULL) {
      if (p->lengths == 'l') mbtowc(wp, &buff[p->width], 1);
      if (p->lengths == 0) *pdec = buff[p->width];
    }
  }

  return res;
}

char *write_str(char *buff, char *str, va_list next_var, param_t *p) {
  char *pdec = s21_NULL;
  char *res = s21_NULL;
  wchar_t *wp = s21_NULL;
  if (p->width != -1) {
    if (p->lengths == 0) pdec = va_arg(next_var, char *);
    if (p->lengths == 'l') wp = va_arg(next_var, wchar_t *);
  }
  res = prce_str(str, buff, p);
  if (p->width != -1) {
    if (res != s21_NULL) {
      if (p->lengths == 'l') mbstowcs(wp, buff, s21_strlen(buff));
      if (p->lengths == 0) s21_strncpy(pdec, buff, s21_strlen(buff));
    }
  }
  return res;
}
