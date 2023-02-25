/* C program to compute the sum of first 10 natural numbers */

#include<stdio.h>

int main(){
	int i, result=0;
	for(i=1; i<=10; i++){
		result += i;
	}
	printf("The sum of first 10 numbers is %d.\n", result);
	return 0;
}
