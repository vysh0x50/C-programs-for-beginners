/*
 ============================================================================
 Name        : simple.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p;
	float r,n,SI;

	printf("Enter principal amount:");
	scanf("%d,&p");
	printf("Enter Interest rate:");
	scanf("%f",&r);
	printf("Enter number of years:");
	scanf("%f",&n);

	SI=(p*r*n)/100;
	printf("Simple Interest is:%f",SI);
	return EXIT_SUCCESS;
}
