/*
 ============================================================================
 Name        : function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[100];
	getArray();
	displayArray();

	return EXIT_SUCCESS;
}
void getArray(){
	int i;
	int array[100];
	printf("Enter array elements :");
	for(i=0;i<5;i++){
		scanf("%d", &array[i]);
	}
}
void displayArray(){
	int i;
	int array[100];
	printf("Entered array values are :");
	for(i=0;i<5;i++){
		printf("%d\t", array[i]);

	}
}
