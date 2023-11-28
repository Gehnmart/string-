#ifndef LIB_H
#define LIB_H

#include <math.h>
#include <stdlib.h>

#include "parse_sprintf.h"

void check_flags(param_t param, char sign[2], int *count, int negative,
                 char flag_o_x[3], char aggregate[2], int *precision);
void converter_from_10(char *num_str, unsigned long int num, int base,
                       int *length, int reg);
void case_letter(int oct, char *mass, int *k, int reg);
void write_char_sprintf(char *str, char c);
int length_int(long int num);
void int_to_str(long int num, char *str);
void s21_strcat(char *dest, const char *src);
int f_len(double value);
int cut_first(int n);
int strlenw(wchar_t *str);
#endif /*LIB_H*/
