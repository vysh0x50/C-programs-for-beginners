/*
 ============================================================================
 Name        : Multiplication_table.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,num,out;
	printf("Enter a number :");
	scanf("%d",&num);

	for(i=1;i<=10;i++){
		printf("%d * %d = %d \n",i,num,num*i);

	}
	return EXIT_SUCCESS;
}
