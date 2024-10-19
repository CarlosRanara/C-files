#include <string.h>

#define GREEN   "\x1b[32m"
#define RED     "\x1b[31m"
#define RESET   "\x1b[0m"

// Function to print the result and color code the output
void printResult(int expected, int actual) {
    if (expected == actual) {
        printf(GREEN "PASS" RESET "\n");
    } else {
        printf(RED "FAIL" RESET "\n");
    }
}

void printResultStr(const char* expected, const char* actual) {
    if (strcmp(expected, actual) == 0) {
        printf(GREEN "PASS" RESET "\n");
    } else {
        printf(RED "FAIL" RESET "\n");
    }
}
