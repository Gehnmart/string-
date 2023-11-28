#ifndef TEST_SPRINTF_H
#define TEST_SPRINTF_H

#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../s21_string.h"

Suite *s21_sprintf_d_suite(void);

Suite *s21_sprintf_x_suite(void);
Suite *s21_sprintf_u_suite(void);
Suite *s21_sprintf_o_suite(void);
Suite *s21_sprintf_c_suite(void);
Suite *s21_sprintf_s_suite(void);
Suite *s21_sprintf_f_suite(void);
Suite *s21_sprintf_e_suite(void);
Suite *s21_sprintf_g_suite(void);
Suite *s21_sprintf_n_suite(void);
Suite *s21_sprintf_percent_suite(void);
Suite *s21_sprintf_combs_suite(void);

#endif /*TEST_SPRINTF_H*/
