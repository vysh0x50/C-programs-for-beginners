/*
 ============================================================================
 Name        : function_without_arg_with_returnvalue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void) {
	int k;
	k=sum();
	printf("Sum is %d", k);
	return EXIT_SUCCESS;
}
int sum(){
	int num1,num2,result;
	printf("Enter two numbers:");
	scanf("%d%d", &num1,&num2);
	result=num1+num2;
	return result;
}
