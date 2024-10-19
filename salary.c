/* hours worked * hourly rate Bonuses are given:

No. of hours > 45                               Bonus of 100 pesos

No. of hours > 40 and <= 45            Bonus of 50 pesos

No. of hours > 35 and <=40             Bonus of 25 pesos
*/

#include <stdio.h>
#define LOW 25
#define MID 50
#define HIGH 100

float salary(int hrsw, float hrsr, int bns){
    return (hrsw*hrsr) + bns;
}

int main(){
   int hrsw, bns;
   float hrsr;

   printf("Input Hours Worked: \n");
   scanf("%d",&hrsw);
   printf("Input Hourly Rate: \n");
   scanf("%f",&hrsr);

   if (hrsw > 45)
       bns = 100;
   else if (hrsw > 40 && hrsw <=45)
       bns = 50;
   else if (hrsw > 35 && hrsw <=40)
       bns = 25;
   else
       bns = 0;

   printf("Your salary is: %.2f \n", salary(hrsw,hrsr,bns));

return 0;
}   
