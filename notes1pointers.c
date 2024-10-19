#include <stdio.h>
void palitNumber(int *val){
    *val =32;
}
void changeVal(int *num){
    palitNumber(num); // no address because you are passing the address
    *num=22; //* changes the value
}
int main(){

int num = 3;
changeVal(&num);
printf("%d", num);
    return 0;
}
