#include "cunittests.h"
#include "minunit.h"
#include "compareutility.h"

int tests_run = 0;

int foo = 7;
int bar = 5;

static char * test_qs() {
    int unsortedInts [6]  = { 4, 9, 1, 73, 2, -12 };
    int sortedInts [6] = { -12, 1, 2, 4, 9, 73 };
//    mu_assert(<#message#>, <#test#>)
    return 0;
}

static char * test_array_compare() {
    int sortedInts [6] = { -12, 1, 2, 4, 9, 73 };
    mu_assert("error, arrays not equal", arraysequal(sortedInts, sortedInts));
    return 0;
}


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
    mu_run_test(test_array_compare);
    return 0;
}
