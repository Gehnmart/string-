#include "../s21_string.h"

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  char *ptr = (char *)dest;
  for (s21_size_t i = 0; i < n;) {
    if (*ptr && !i) {
      ptr++;
      continue;
    }
    ptr[i] = ((char *)src)[i];
    i++;
  }
  ptr[n] = '\0';

  return dest;
}

char *s21_strchr(const char *str, int c) {
  const char *ptr = s21_NULL;
  for (s21_size_t i = 0; str[i] != '\0'; i++) {
    if (str[i] == c) {
      ptr = &str[i];
      break;
    }
  }

  return (char *)ptr;
}

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int result = 0;
  for (s21_size_t i = 0; i < n; i++) {
    if (str1[i] == str2[i])
      continue;
    else {
      result = str1[i] - str2[i];
      break;
    }
  }

  return result;
}

s21_size_t s21_strlen(const char *str) {
  const char *s = str;
  for (; *s;) s++;
  return (s21_size_t)(s - str);
}

char *s21_strpbrk(const char *str1, const char *str2) {
  int flag = 0;
  char *res = s21_NULL;
  for (char *c = (char *)str1; *c; c++) {
    char *k = (char *)str2;
    for (; *k; k++) {
      if (*c == *k) {
        res = c;
        flag = 1;
        break;
      }
    }
    if (flag) break;
  }
  return res;
}

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  s21_size_t i = 0;
  for (; i < n; i++) dest[i] = src[i];
  dest[n] = '\0';
  return dest;
}

char *s21_strrchr(const char *str, int c) {
  char *ptr = s21_NULL;
  for (; *str; str++) {
    if (*str == c) {
      ptr = (char *)str;
    }
  }
  return ptr;
}

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  s21_size_t result = 0;
  for (; str1[result]; result++)
    for (const char *ch2 = str2; *ch2; ch2++)
      if (str1[result] == *ch2) return result;
  return result;
}

char *s21_strstr(const char *haystack, const char *needle) {
  char *result = s21_NULL;
  int length_compasion = s21_strlen(needle);
  if (length_compasion == 0) {
    return (char *)haystack;
  }
  for (s21_size_t i = 0; haystack[i]; i++) {
    for (s21_size_t k = 0; needle[k]; k++) {
      if (haystack[i + k] == needle[k]) {
        length_compasion--;
        if (length_compasion == 0) {
          result = (char *)haystack + i;
          break;
        }
      }
      if (result) break;
    }
  }
  return result;
}

char *s21_strtok(char *str, const char *delim) {
  static char *last = s21_NULL;
  char *start = s21_NULL;
  int offset = 0;
  int index = 0;

  if (str != s21_NULL) last = str;
  if (last == s21_NULL) return s21_NULL;

  for (; last[index] && offset == 0; index++) {
    for (int k = 0; delim[k]; k++) {
      if (last[index] == delim[k]) {
        offset++;
        index++;
        k = -1;
      }
    }
  }

  if (offset > 0) {
    start = last;
    start[index - offset - 1] = '\0';
    last += index - 1;
  } else if (index > 0) {
    start = last;
    start[index] = '\0';
    last = s21_NULL;
  }

  return start;
}
