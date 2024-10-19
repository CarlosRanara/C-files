/*net income = gross income - (gross income - rate)
  3% if x  <= 8000
  5% if < 8000 x  < 15000
  8% if x >= 15000
*/

#include <stdio.h>
#define LOW 0.03
#define MID 0.05
#define HIGH 0.08


float CalInc(float inc, float rt){
    return inc - (inc*rt);
}

int main(){

    float rate, income;

    printf("Input Income:\n");
    scanf("%f", &income);

    if (income <= 8000)
        rate = LOW;
    else if (income > 8000 && income < 15000)
        rate = MID;
    else
        rate = HIGH;
   
   printf("Tax Rate: %.2f \n", rate);
   printf("New Income: %.2f \n", CalInc(income, rate));

return 0;
}

    
