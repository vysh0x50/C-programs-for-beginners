/*
 ============================================================================
 Name        : NegativeOrPositive.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter a number:");
	scanf("%d",&num);

	if(num<0){
		printf("The number is negative");
	}else{
		printf("The number is positive");
	}

	return EXIT_SUCCESS;
}
