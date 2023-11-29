#ifndef S21_SSCANF_H
#define S21_SSCANF_H

#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdlib.h>

#define BUFF_MAX 8192

typedef struct {
  int width;
  char lengths;
  char space;
  char specifier;
  int n_specik;

} param_t;

long long s21_atoll(char *buff);
unsigned long long s21_atoull(char *buff);
long long int octal_to_dec(long long int x);
double s21_atof(char *buff);
long long s21_strtol(char *buff, int sistem);
long long s21_strtoi(char *buff, int sistem);
long long s21_strtoall(char *buff);

char *prce_f(char *str, char *buf, param_t *param);
char *prce_str(char *str, char *buf, param_t *param);
char *prce_chr(char *str, char *buf, param_t *param);
char *prce_d(char *str, char *buf, param_t *param);
char *prce_i(char *str, char *buf, param_t *param);
char *prce_o(char *str, char *buf, param_t *param);
char *prce_x(char *str, char *buf, param_t *param);
char *parse_procent(char *str, param_t *param);

char *write_x(char *buff, char *str, va_list next_var, param_t *p);
char *write_lx(char *buff, char *str, va_list next_var, param_t *p);
char *write_hx(char *buff, char *str, va_list next_var, param_t *p);

char *write_u(char *buff, char *str, va_list next_var, param_t *p);
char *write_lu(char *buff, char *str, va_list next_var, param_t *p);
char *write_hu(char *buff, char *str, va_list next_var, param_t *p);

char *write_i(char *buff, char *str, va_list next_var, param_t *p);
char *write_li(char *buff, char *str, va_list next_var, param_t *p);
char *write_hi(char *buff, char *str, va_list next_var, param_t *p);

char *write_o(char *buff, char *str, va_list next_var, param_t *p);
char *write_ho(char *buff, char *str, va_list next_var, param_t *p);
char *write_lo(char *buff, char *str, va_list next_var, param_t *p);

char *write_str(char *buff, char *str, va_list next_var, param_t *p);
char *write_char(char *buff, char *str, va_list next_var, param_t *p);

char *write_int(char *buff, char *str, va_list next_var, param_t *p);
char *write_l_int(char *buff, char *str, va_list next_var, param_t *p);
char *write_h_int(char *buff, char *str, va_list next_var, param_t *p);

char *write_f(char *buff, char *str, va_list next_var, param_t *p);
char *write_lf(char *buff, char *str, va_list next_var, param_t *p);
char *write_Lf(char *buff, char *str, va_list next_var, param_t *p);

char *write_n(va_list next_var, param_t *p, char *str);
char *write_p(char *buff, char *str, va_list next_var, param_t *p);
#endif /*S21_SSCANF_H*/
