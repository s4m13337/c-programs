#include<stdio.h>

int main(){
  /* Method 1 using temp variable */
  int a, b, temp;
  printf("Enter the value of a:\t");
  scanf("%d", &a);
  printf("Enter the value of b:\t");
  scanf("%d", &b);
  temp = a;
  a = b;
  b = temp;
  printf("The value of a is %d\n", a);
  printf("The value of b is %d\n", b);
}
