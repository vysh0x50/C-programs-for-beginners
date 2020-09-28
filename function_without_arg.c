/*
 ============================================================================
 Name        : function_without_arg.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sum();
int main(void) {
	sum();
	return EXIT_SUCCESS;
}
void sum(){
	int num1,num2,sum;
	printf("Enter two numbers :");
	scanf("%d%d", &num1,&num2);
	sum=num1+num2;
	printf("Sum is :%d", sum);
}
