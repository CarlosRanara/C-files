#include <stdio.h>
#define PI 3.14159

int main(){
    float radius;
    printf("Hello input radius in centimeters please!\n");
    scanf("%f", &radius);
    printf("This is the area of the circle %f centimeters", radius*radius*PI);
    return 0;
}
