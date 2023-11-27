#include "../s21_string.h"
#include "s21_sscanf.h"

#define isDigit(x) (x >= '0' && x <= '9')
#define isXex(x) ((x >= 'a' && x <= 'f') || (x >= 'A' && x <= 'F'))

static long long s21_octtol(char *buff) {
  unsigned long long math = 0;
  int unar = 0;
  if (*buff == '-') {
    unar = 1;
    buff++;
  } else if (*buff == '+') {
    buff++;
  }
  if (*buff == '0') {
    buff += 1;
  }

  for (; *buff; buff++) {
    math *= 8;
    math += (*buff - '0');
  }

  long long res = math;
  if (unar) res = -res;

  return res;
}

long long s21_hextol(char *buff) {
  unsigned long long math = 0;
  int unar = 0;
  if (*buff == '-') {
    unar = 1;
    buff++;
  } else if (*buff == '+') {
    buff++;
  }
  if (*buff == '0' && *(buff + 1) == 'x') {
    buff += 2;
  }

  for (; *buff; buff++) {
    if (math * 16 < math) {
      return ULLONG_MAX;
    }
    math *= 16;
    if ((*buff >= 'a' && *buff <= 'f')) {
      math += (*buff - 'a' + 10);
    } else if ((*buff >= 'A' && *buff <= 'F')) {
      math += (*buff - 'A' + 10);
    } else {
      math += (*buff - '0');
    }
  }

  long long res = math;
  if (unar) res = -res;

  return res;
}

long long s21_hextoi(char *buff) {
  unsigned long long math = 0;
  int unar = 0;
  if (*buff == '-') {
    unar = 1;
    buff++;
  } else if (*buff == '+') {
    buff++;
  }
  if (*buff == '0' && *(buff + 1) == 'x') {
    buff += 2;
  }

  for (; *buff; buff++) {
    math *= 16;
    if ((*buff >= 'a' && *buff <= 'f')) {
      math += (*buff - 'a' + 10);
    } else if ((*buff >= 'A' && *buff <= 'F')) {
      math += (*buff - 'A' + 10);
    } else {
      math += (*buff - '0');
    }
    if (math > INT_MAX) {
      return -1;
    }
  }

  long long res = math;
  if (unar) res = -res;

  return res;
}

long long s21_strtol(char *buff, int sistem) {
  if (sistem == 0) return s21_atoll(buff);

  if (sistem == 8) {
    return s21_octtol(buff);
  }
  if (sistem == 16) {
    return s21_hextol(buff);
  }
  return 0;
}

long long s21_strtoi(char *buff, int sistem) {
  if (sistem == 0) return s21_atoll(buff);

  if (sistem == 8) {
    return s21_octtol(buff);
  }
  if (sistem == 16) {
    return s21_hextoi(buff);
  }
  return 0;
}

long long s21_strtoall(char *buff) {
  int base = 0;
  char *ptr = buff;
  if (*ptr == '-') ptr++;
  if (ptr[0] != '0') {
    for (s21_size_t i = 0; i < s21_strlen(ptr); i++) {
      if (isXex(ptr[i])) {
        base = 16;
        break;
      }
    }
  } else if (ptr[1] == 'x') {
    base = 16;
  } else {
    base = 8;
  }

  if (base == 0) return s21_atoll(buff);

  if (base == 8) {
    return s21_octtol(buff);
  }
  if (base == 16) {
    return s21_hextol(buff);
  }
  return 0;
}

double s21_atof(char *buff) {
  char unar = 1;
  int e = 0;
  long double res = 0;
  long double drop = 0;
  int top = 0;

  if (*buff == '-') {
    unar = -1;
    buff++;
  }

  if (*buff == '+') {
    buff++;
  }

  for (; *buff != '.' && *buff; buff++) {
    res = 10 * res + (*buff - '0');
  }

  buff++;

  for (; *buff && isDigit(*buff); buff++, top++) {
    drop = drop * 10 + (*buff - '0');
  }
  for (int i = 0; i < top; i++) drop *= 0.1;

  res += drop;

  if (*buff == 'e' || *buff == 'E') {
    int unar_e = 1;
    buff++;
    if (*buff == '-') {
      unar = -1;
      buff++;
    }
    if (*buff == '+') buff++;
    for (; *buff; buff++) {
      e = e * 10 + (*buff - '0');
    }
    e *= unar_e;
  }
  for (; e < 0; e++) {
    res *= -10;
  }
  for (; e > 0; e--) {
    res *= 10;
  }
  res *= unar;
  return res;
}

long long s21_atoll(char *buff) {
  unsigned long long math = 0;
  int unar = 0;
  if (*buff == '-') {
    unar = 1;
    buff++;
  } else if (*buff == '+')
    buff++;

  for (; *buff; buff++) {
    math *= 10;
    math += (*buff - '0');
    if (math > LLONG_MAX) {
      if (unar) {
        return LLONG_MIN;
      } else
        return LLONG_MAX;
    }
  }

  long long res = math;
  if (unar) res = -res;

  return res;
}

unsigned long long s21_atoull(char *buff) {
  unsigned long long res = 0, prev = 0;

  int unar = 0;
  if (*buff == '-') {
    unar = 1;
    buff++;
  } else if (*buff == '+')
    buff++;

  if (*buff == '0') return 0;
  for (; *buff; buff++) {
    res *= 10;
    res += (*buff - '0');
    if (res <= prev) {
      return ULLONG_MAX;
    } else {
      prev = res;
    }
  }
  if (unar) res = -res;
  return res;
}
