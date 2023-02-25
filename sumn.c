/* 
	C program to compute the sum of first n natural numbers.
	This program takes an input n which refers to the limit of numbers for which the sum must be calculated.
	The input is passed as a command line argument.
	The character command line argument is converted to integer using the function atoi()
 */


#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	char *a = argv[1];
	int n = atoi(a);
	int s = n * (n+1)/2;
	printf("The sum of first %d natural numbers is %d.\n", n, s);
	return 0;
}