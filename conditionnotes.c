#include <stdio.h>

int main() {

    int x, y, z;

    
    scanf("%d%d%d", &x, &y, &z);


    if (x > y && x > z) {
        printf("The highest value is: %d\n", x);
    } 
    else if (y > z) {
        printf("The highest value is: %d\n", y);
    } 
    else {
        printf("The highest value is: %d\n", z);
    }

    return 0;
}
