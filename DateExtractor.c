#include <stdio.h>

int main()
{
    int date, year, day;
    // Input
    printf("Enter Date: ");
    scanf("%d", &date);
    // Breakdown
    year = date % 10000; //Separate the last 4 digits
    date = date / 10000; //Remove last 4 digits
    day = date % 100;    //Get last 2 digits
    date = date / 100;   // Remove last two digits
    //Display 
    printf("Month : %02d\n", date);
    printf("Day   : %02d\n", day);
    printf("Year  : %04d\n", year);
    return 0;
}
