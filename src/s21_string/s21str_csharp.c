#include <stdlib.h>

#include "../s21_string.h"

void *s21_insert(const char *src, const char *str, s21_size_t start_index) {
  s21_size_t len_src = s21_strlen(src);
  s21_size_t len_str = s21_strlen(str);
  char *res;
  if (len_src < start_index) return res = s21_NULL;
  char *buf = malloc(sizeof(char) * (len_src - start_index));
  char *sr = &((char *)src)[start_index];
  buf = s21_memcpy(buf, sr, len_src - start_index);
  char *buff = malloc(sizeof(char) * len_src);
  buff = s21_memcpy(buff, src, start_index);
  res = malloc(sizeof(char) * (len_str + len_src + 1));
  res = s21_memcpy(res, buff, start_index);
  char *sr1 = &res[start_index];
  sr1 = s21_memcpy(sr1, str, len_str);
  char *sr2 = &res[start_index + len_str];
  sr2 = s21_memcpy(sr2, buf, len_src - start_index);
  res[len_str + len_src] = '\0';
  free(buf);
  free(buff);
  return res;
}

void *s21_trim(const char *src, const char *trim_chars) {
  s21_size_t length = s21_strlen(src);
  char *newString = malloc(sizeof(char) * length);
  int start = 0;
  int end = length - 1;

  for (; s21_strchr(trim_chars, src[start]) != s21_NULL; start++)
    ;
  for (; s21_strchr(trim_chars, src[end]) != s21_NULL; end--)
    ;
  s21_memset(newString, 0, length);
  for (int i = 0; start <= end; i++) {
    newString[i] = src[start++];
  }

  return newString;
}

void *s21_to_upper(const char *str) {
  s21_size_t size = s21_strlen(str);
  char *k = malloc(sizeof(char) * (size + 1));
  k = s21_memcpy(k, str, size + 1);
  for (s21_size_t i = 0; i < size; i++) {
    if (k[i] >= 97 && k[i] <= 122) {
      k[i] -= 32;
    }
  }
  k[size] = '\0';
  return k;
}

void *s21_to_lower(const char *str) {
  s21_size_t size = s21_strlen(str);
  char *k = malloc(sizeof(char) * (size + 1));
  k = s21_memcpy(k, str, size + 1);
  for (s21_size_t i = 0; i < size; i++) {
    if (k[i] >= 65 && k[i] <= 90) {
      k[i] += 32;
    }
  }
  k[size] = '\0';
  return k;
}
