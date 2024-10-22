#include <stdio.h>

int main(){
    int signal;
    
    scanf("%d", &signal);
    printf("Classes suspended for: \n");
    
    switch(signal){
        case 5:
            printf("Graduate Studies\n");
        case 4:
            printf("College\n");
        case 3:
            printf("HighSchool\n");
        case 2:
            printf("Elementary\n");
        case 1:
            printf("Kindergarten\n");
            break;  // Ensures it stops after printing the relevant levels
        default:
            printf("Invalid signal\n");
    }

    return 0;
}
