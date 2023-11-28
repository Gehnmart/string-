#include "./test_sprintf/test_sprintf.h"
#include "./test_sscanf/test_sscanf_all.h"
#include "./test_string/test_string_all.h"

int main() {
  int number_failed = 0;
  SRunner *sr;

  Suite *string_suite = string_all_suite();
  sr = srunner_create(string_suite);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  Suite *sscanf_suite = s21_scanf_int_suite();
  sr = srunner_create(sscanf_suite);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  Suite *d = s21_sprintf_d_suite();
  sr = srunner_create(d);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  Suite *g = s21_sprintf_g_suite();
  sr = srunner_create(g);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  Suite *x = s21_sprintf_x_suite();
  sr = srunner_create(x);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  Suite *u = s21_sprintf_u_suite();
  sr = srunner_create(u);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  Suite *o = s21_sprintf_o_suite();
  sr = srunner_create(o);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  Suite *c = s21_sprintf_c_suite();
  sr = srunner_create(c);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  Suite *s = s21_sprintf_s_suite();
  sr = srunner_create(s);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  Suite *f = s21_sprintf_f_suite();
  sr = srunner_create(f);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  Suite *e = s21_sprintf_e_suite();
  sr = srunner_create(e);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  Suite *n = s21_sprintf_n_suite();
  sr = srunner_create(n);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  Suite *percent = s21_sprintf_percent_suite();
  sr = srunner_create(percent);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  Suite *combs = s21_sprintf_combs_suite();
  sr = srunner_create(combs);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
