#ifndef S21_SPRONTF_PROCESS
#define S21_SPRONTF_PROCESS

#define BUFF_SIZE 4048

#include <math.h>
#include <stdbool.h>

#include "../s21_string.h"
#include "parse_sprintf.h"

int process_c(char* p_dest, param_t param, int value);
int process_s(char* p_dest, param_t param, char* value);
int process_f(char* p_dest, param_t param, long double value);
int process_e(char* p_dest, param_t param, long double value, bool capital,
              bool from_g);
int process_int(char* num_str, char* str, param_t param, int length,
                int negative);
int process_g(char** p_dest, param_t* param, long double value, bool capital);

#endif /*S21_SPRONTF_PROCESS*/
