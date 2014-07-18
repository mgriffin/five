#include <stdio.h>
#include "minunit.h"
#include "five.h"

int tests_run = 0;

static char * test_five() {
  int out;
  out = five();
  mu_assert("error, five != 5", out == 5);
  return 0;
}

static char * all_tests() {
  mu_run_test(test_five);
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
