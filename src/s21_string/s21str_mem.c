#include "../s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
  char *ptr = s21_NULL;
  char *str_f = (char *)str;
  for (s21_size_t i = 0; i < n; i++) {
    if (str_f[i] == c) {
      ptr = &str_f[i];
      break;
    }
  }
  return ptr;
}

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  char *dest_f = (char *)dest;
  char *src_f = (char *)src;
  for (s21_size_t i = 0; i < n; i++) {
    dest_f[i] = src_f[i];
  }
  return dest;
}

void *s21_memset(void *str, int c, s21_size_t n) {
  char *ptr = str;
  for (s21_size_t i = 0; i < n; i++) {
    ptr[i] = c;
  }
  return str;
}

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  int res = 0;
  char *str1_f = (char *)str1;
  char *str2_f = (char *)str2;

  for (s21_size_t i = 0; i < n; i++) {
    if (str1_f[i] != str2_f[i]) {
      res = str1_f[i] - str2_f[i];
      break;
    }
  }
  return res;
}