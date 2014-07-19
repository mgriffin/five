#include <stdio.h>
#include <string.h>
#include "minunit.h"
#include "five.h"

int tests_run = 0;

static char * test_five() {
  int out = five();
  mu_assert("error, five != 5", out == 5);
  return 0;
}

static char * test_add_five() {
  int out = five() + five();
  mu_assert("error, five + five != 10", out == 10);
  return 0;
}

static char * test_multiply_five() {
  int out = five() * five();
  mu_assert("error, five * five != 25", out == 25);
  return 0;
}

static char * test_divide_five() {
  int out = five() / five();
  mu_assert("error, five / five != 1", out == 1);
  return 0;
}

static char * test_five_roman() {
  const char * out = five_roman();
  mu_assert_string("error, five_roman != V", strcmp(out, "V"));
  return 0;
}

static char * test_five_morsecode() {
  const char * out = five_morsecode();
  mu_assert_string("error, five_morsecode != di-di-di-di-dit", strcmp(out, "di-di-di-di-dit"));
  return 0;
}

static char * all_tests() {
  mu_run_test(test_five);
  mu_run_test(test_add_five);
  mu_run_test(test_multiply_five);
  mu_run_test(test_divide_five);
  mu_run_test(test_five_roman);
  mu_run_test(test_five_morsecode);
  return 0;
}

int main(int argc, char **argv) {
  char *result = all_tests();
  if (result != 0) {
    printf("%s\n", result);
  }
  else {
    printf("ALL TESTS PASSED\n");
  }
  printf("Tests run: %d\n", tests_run);

  return result != 0;
}
