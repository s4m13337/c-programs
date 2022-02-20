/* Program to calculate area of a right angled traingle */

#include<stdio.h>

int main(){
  float base, height, area;
  printf("Base:\t");
  scanf("%f", &base);
  printf("Height\t");
  scanf("%f", &height);
  area = 1.0/2.0 * base * height;
  printf("The area is %f.\n", area);
  return 0;
}
