/*
 ============================================================================
 Name        : sum_of_array_values.c
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
	int a[100];
	printf("Enter your limit :");
	scanf("%d", &limit);
	printf("Enter your values :");
	for(i=0;i<limit;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<limit;i++){
		sum=sum+a[i];
	}
	printf("Sum is:%d", sum);
	return EXIT_SUCCESS;
}
