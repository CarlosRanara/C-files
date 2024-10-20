#include <stdio.h>

int main(){

    int time, firstTwo, lastTwo;

    printf("Input time (24-hour notation); \n");
    scanf("%d", &time);

    lastTwo = time % 100;
    time /= 100;
    firstTwo = time;
    
    if (firstTwo > 12){
	firstTwo -= 12;
	printf("12 hour notation: %02d:%02d PM\n", firstTwo, lastTwo);	
    }
    else
    printf("12 hour notation: %02d:%02d AM\n", firstTwo, lastTwo);

	


return 0;
}
