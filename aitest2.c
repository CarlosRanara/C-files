#include <stdio.h>
int isEven(int *num1){
  int total = *num1 % 2;
  if (total == 0)
    return printf("Even\n");
  else
    return printf("Odd\n");
}
int main(){
  int num1;
  printf("Enter number: \n");
  scanf("%d",&num1);
  isEven(&num1);
  return 0;
}
