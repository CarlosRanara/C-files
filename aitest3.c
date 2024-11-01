#include <stdio.h>
void makeAbsolute(int *num1){
  if (*num1 < 0){
  *num1 *= -1;
  }
}
int main(){
  int num1;
  printf("Enter number: \n");
  scanf("%d", &num1);
  makeAbsolute(&num1);
  printf("Absolute value: %d\n", num1);
  return 0;
}
