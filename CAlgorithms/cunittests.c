#include "cunittests.h"
#include "minunit.h"

int tests_run = 0;

int foo = 7;
int bar = 5;

static char * test_foo() {
    mu_assert("error, foo != 7", foo == 7);
    return 0;
}

static char * test_bar() {
    mu_assert("error, bar != 5", bar == 5);
    return 0;
}

char * all_tests() {
    mu_run_test(test_foo);
    mu_run_test(test_bar);
    return 0;
}
