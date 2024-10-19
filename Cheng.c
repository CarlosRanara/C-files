/*
Years of service        Bonus

1                       1% of salary

2 to 3                  2% of salary

4 to 10                 5% of salary

10+                     10% of salary

*/

#include <stdio.h>

void computeNewSalary(float *salary, int *years){
    float bonus;
    if (*years == 1)
	bonus = 0.01;
    else if (*years >= 2 && *years <= 3)
	bonus = 0.02;
    else if (*years >= 4 && *years <= 10)
	bonus = 0.05;
    else
	bonus = 0.10;

    *salary += *salary*bonus;
}


int main(){
    float salary;
    int years;

    printf("Input Salary: \n");
    scanf("%f", &salary);
    printf("Input Years of Service: \n");
    scanf("%d", &years);

    computeNewSalary(&salary, &years);
     printf("New Salary: %.2f \n", salary);

return 0;
}
