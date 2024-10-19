#include <stdio.h>
#include "indivExer-RANARA.c" // Replace this with your lastname
#include "skibiditoilet.c"



int main() {
    int input;
    int expected;

    // display3Digits tests
    printf("\nTesting display3Digits:\n");
    printf("Enter a number for display3Digits: ");
    scanf("%d", &input);
    printf("Expected output (original and reversed): ");
    display3Digits(input); // Visual check

    // reverseNumber tests
    printf("\nTesting reverseNumber:\n");
    printf("Enter a number to reverse: ");
    scanf("%d", &input);
    printf("Enter expected reversed number: ");
    scanf("%d", &expected);
    printResult(expected, reverseNumber(input));

    // getSum tests
    printf("\nTesting getSum:\n");
    printf("Enter a number to get sum of digits: ");
    scanf("%d", &input);
    printf("Enter expected sum of digits: ");
    scanf("%d", &expected);
    printResult(expected, getSum(input));

    // isOdd tests
    printf("\nTesting isOdd:\n");
    printf("Enter a number to check odd/even: ");
    scanf("%d", &input);
    char expectedStr[10];
    printf("Enter expected result (Odd/Even): ");
    scanf("%s", expectedStr);
    printResultStr(expectedStr, isOdd(input) ? "Odd" : "Even");

    // getSum + isOdd tests
    printf("\nTesting getSum + isOdd:\n");
    printf("Enter a number to sum its digits and check odd/even: ");
    scanf("%d", &input);
    printf("Enter expected result (Odd/Even): ");
    scanf("%s", expectedStr);
    printResultStr(expectedStr, isOdd(getSum(input)) ? "Odd" : "Even");

    // reverseNumber + isOdd tests
    printf("\nTesting reverseNumber + isOdd:\n");
    printf("Enter a number to reverse and check odd/even: ");
    scanf("%d", &input);
    printf("Enter expected result (Odd/Even): ");
    scanf("%s", expectedStr);
    printResultStr(expectedStr, isOdd(reverseNumber(input)) ? "Odd" : "Even");

    return 0;
}
