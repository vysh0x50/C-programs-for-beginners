/*
 ============================================================================
 Name        : array_values_swapping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,size,temp;
	int array1[100],array2[100];
	printf("Enter the size of array :");
	scanf("%d", &size);
	printf("Enter values of array 1 :");
	for(i=0;i<size;i++){
		scanf("%d", &array1[i]);
	}
	printf("Enter values of array 2 :");
	for(i=0;i<size;i++){
		scanf("%d", &array2[i]);
	}
	for(i=0;i<size;i++){
			temp=array1[i];
			array1[i]=array2[i];
			array2[i]=temp;
		}
	printf("The swapped array1 values are :");
	for(i=0;i<size;i++){
		printf("%d\t", array1[i]);
	}
	printf("\n");
	printf("The swapped array2 values are :");
	for(i=0;i<size;i++){
		printf("%d\t", array2[i]);
	}
	return EXIT_SUCCESS;
}
