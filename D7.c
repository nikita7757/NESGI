//Write a program "HOW TO CHNAGE A VALUE OF CONSTANT":
#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
	const int var = 10; 
	int *ptr = &var; 
	*ptr = 12; 
	printf("var = %d\n", var); 
	return 0; 
} 
