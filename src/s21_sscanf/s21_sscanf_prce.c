#include <ctype.h>

#include "../s21_string.h"
#include "s21_sscanf.h"

static int isspase(char ch) { return (ch == '\n' || ch == '\t' || ch == ' '); }
static int issign(char ch) { return (ch == '-' || ch == '+'); }
static int isoctal(char ch) { return (ch >= '0' && ch <= '7'); }
static int icase_compare(char ch1, char ch2) {
  return (ch1 == ch2 || ch1 == ch2 - 32);
}
static int space_skip(char **str, param_t *param) {
  int counter = 0;
  for (; isspase(**str); (*str)++, counter++)
    ;
  if (param != s21_NULL) param->n_specik += counter;
  if (**str == '\0') return 1;
  return 0;
}
static int strsearch(char *str, char *pattern, int len) {
  int plen = s21_strlen(pattern);

  int k = 0, i = 0;
  for (; k < plen && icase_compare(str[i], pattern[k]); ++k, ++i, --len)
    ;
  return !len;
}

char *prce_f(char *str, char *buf, param_t *param) {
  s21_memset(buf, 0, BUFF_MAX - 1);

  int width = BUFF_MAX;
  width = (param->width > 0) ? param->width : width;

  if (space_skip(&str, param)) {
    return s21_NULL;
  }

  if (issign(*str) && (isdigit(str[1]) || (str[1] == 'i' || str[1] == 'I' ||
                                           str[1] == 'n' || str[1] == 'N'))) {
    if (width == 1) return s21_NULL;
    *(buf++) = *(str++);
    width--;
    param->n_specik++;
  }

  if (*str == '0' && (str[1] == 'x' || str[1] == 'X') && isxdigit(str[2])) {
    *(buf++) = *(str++);
    *(buf++) = *(str++);
    width -= 2;
    param->n_specik += 2;
  } else if (strsearch(str, "nan", 3)) {
    param->n_specik += 3;
    s21_strncat(buf, "nan", 3);
    return str += 3;
  } else if (strsearch(str, "infinity", 8)) {
    param->n_specik += 8;
    s21_strncat(buf, "inf", 8);
    return str += 8;
  } else if (strsearch(str, "inf", 3)) {
    param->n_specik += 3;
    s21_strncat(buf, "inf", 3);
    return str += 3;
  }

  int ind = 0;
  int sign_flag = 1;
  int dot_flag = 1;
  int exp_flag = 1;
  for (; (ind < width && *str); buf++, str++, ind++, param->n_specik++) {
    if (isdigit(*str)) {
      *buf = *str;
    } else if ((*str == '.' || (*str == '-' && sign_flag)) && dot_flag && ind &&
               ind < width - 1) {
      *buf = *str;
      dot_flag = 0;
      sign_flag = 0;
      continue;
    } else if ((*str == 'e' || *str == 'E') && exp_flag && ind &&
               ind < width - 1) {
      sign_flag = 1;
      *buf = *str;
      exp_flag = 0;
      continue;
    } else if (ind == 0) {
      return s21_NULL;
    } else {
      break;
    }
  }
  return str;
}

char *prce_o(char *str, char *buf, param_t *param) {
  s21_memset(buf, 0, BUFF_MAX);

  int width = BUFF_MAX;
  width = (param->width > 0) ? param->width : width;

  if (space_skip(&str, param)) {
    return s21_NULL;
  }

  if (issign(*str) && isoctal(str[1])) {
    if (width == 1) return s21_NULL;
    *(buf++) = *(str++);
    width--;
    param->n_specik++;
  }

  int ind = 0;
  for (; (ind < width && *str); buf++, str++, ind++, param->n_specik++) {
    if (isoctal(*str)) {
      *buf = *str;
    } else if (ind == 0) {
      return s21_NULL;
    } else {
      break;
    }
  }
  return str;
}

char *prce_x(char *str, char *buf, param_t *param) {
  s21_memset(buf, 0, BUFF_MAX);

  int width = BUFF_MAX;
  width = (param->width > 0) ? param->width : width;

  if (space_skip(&str, param)) {
    return s21_NULL;
  }

  if (issign(*str) && isxdigit(str[1])) {
    if (width == 1) return s21_NULL;
    *(buf++) = *(str++);
    width--;
    param->n_specik++;
  }

  if (*str == '0' && (str[1] == 'x' || str[1] == 'X') && isxdigit(str[2])) {
    *(buf++) = *(str++);
    *(buf++) = *(str++);
    width -= 2;
    param->n_specik += 2;
  }

  int ind = 0;
  for (; (ind < width && *str); buf++, str++, ind++, param->n_specik++) {
    if ((isxdigit(*str))) {
      *buf = *str;
    } else if (ind == 0) {
      return s21_NULL;
    } else {
      break;
    }
  }
  return str;
}

char *prce_d(char *str, char *buf, param_t *param) {
  s21_memset(buf, 0, BUFF_MAX);

  int width = BUFF_MAX;
  width = (param->width > 0) ? param->width : width;

  if (space_skip(&str, param)) {
    return s21_NULL;
  }

  if (issign(*str) && isdigit(str[1])) {
    param->n_specik++;
    if (width == 1) return s21_NULL;
    *(buf++) = *(str++);
    width--;
  }

  int ind = 0;
  for (; (ind < width && *str); buf++, str++, ind++, param->n_specik++) {
    if (isdigit(*str)) {
      *buf = *str;
    } else if (ind == 0) {
      return s21_NULL;
    } else {
      break;
    }
  }
  return str;
}

char *prce_i(char *str, char *buf, param_t *param) {
  s21_memset(buf, 0, BUFF_MAX);

  int width = BUFF_MAX;
  width = (param->width > 0) ? param->width : width;

  if (space_skip(&str, param)) {
    return s21_NULL;
  }

  if (issign(*str) && isdigit(str[1])) {
    if (width == 1) return s21_NULL;
    *(buf++) = *(str++);
    width--;
    param->n_specik++;
  }

  int hex = 0;
  int octal = 0;
  if (*str == '0') {
    if ((str[1] == 'x' || str[1] == 'X') && isxdigit(str[2])) {
      hex = 1;
      *(buf++) = *(str++);
      *(buf++) = *(str++);
      width -= 2;
      param->n_specik += 2;
    } else
      octal = 1;
  }

  int ind = 0;
  for (; (ind < width && *str); buf++, str++, ind++, param->n_specik++) {
    if (((isxdigit(*str)) && hex) || (!octal && !hex && isdigit(*str)) ||
        (octal && isoctal(*str))) {
      *buf = *str;
    } else if (ind == 0) {
      return s21_NULL;
    } else {
      break;
    }
  }
  return str;
}

char *prce_str(char *str, char *buf, param_t *param) {
  s21_memset(buf, 0, BUFF_MAX);

  int width = BUFF_MAX;
  width = (param->width > 0) ? param->width : width;

  if (space_skip(&str, param)) {
    return s21_NULL;
  }

  int ind = 0;
  for (; (ind < width && *str); buf++, str++, ind++, param->n_specik++) {
    if (!isspase(*str)) {
      *buf = *str;
    } else if (ind == 0) {
      return s21_NULL;
    } else {
      break;
    }
  }
  return str;
}

char *prce_chr(char *str, char *buf, param_t *param) {
  s21_memset(buf, 0, BUFF_MAX);

  int width = 1;
  width = (param->width > 0) ? param->width : width;

  if ((param->space)) space_skip(&str, param);

  if (*str == '\0') return s21_NULL;

  int ind = 0;
  for (; (ind < width && *str); buf++, str++, ind++, param->n_specik++) {
    if (*str != '\0') {
      *buf = *str;
    } else if (ind == 0) {
      return s21_NULL;
    } else {
      break;
    }
  }
  return str;
}

char *parse_procent(char *str, param_t *param) {
  if (space_skip(&str, param)) {
    return s21_NULL;
  }

  int ind = 0;
  int flag = 1;
  for (; *str; str++, param->n_specik++, ind++) {
    if (*str == '%' && flag) {
      flag = 0;
    } else if (ind == 0) {
      return s21_NULL;
    } else {
      break;
    }
  }
  return str;
}
