/*
 ============================================================================
 Name        : sumofall_oddnumbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,sum=0;
	printf("Enter your limit");
	scanf("%d",&limit);
	for(i=1; i<=limit; i+=2)
	    {
	        sum += i;
	    }

	printf("Sum of odd numbers = %d", sum);

	return EXIT_SUCCESS;
}
