#include <check.h>
#include "../main.h"

// Define a test case
START_TEST(test_add_positive_numbers)
{
    // Test case for adding positive numbers
    int result = add(2, 3);
    ck_assert_int_eq(result, 5);
}
END_TEST

START_TEST(test_add_negative_numbers)
{
    // Test case for adding negative numbers
    int result = add(-1, -2);
    ck_assert_int_eq(result, -3);
}
END_TEST

// Add more test cases as needed

// Create a test suite
Suite *my_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("MySuite");

    // Create a test case
    tc_core = tcase_create("Core");

    // Add test cases to the test case
    tcase_add_test(tc_core, test_add_positive_numbers);
    tcase_add_test(tc_core, test_add_negative_numbers);

    // Add the test case to the suite
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void)
{
    int number_failed;
    Suite *s;
    SRunner *sr;

    // Initialize the test suite
    s = my_suite();

    // Create a test runner
    sr = srunner_create(s);

    // Run the tests
    srunner_run_all(sr, CK_NORMAL);

    // Get the number of failed tests
    number_failed = srunner_ntests_failed(sr);

    // Clean up the test runner
    srunner_free(sr);

    return (number_failed == 0) ? 0 : 1;
}
