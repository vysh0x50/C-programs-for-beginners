/*
 ============================================================================
 Name        : evenno_in_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,size,count=0;
	int array[100];
	printf("Enter size of array :");
	scanf("%d", &size);
	printf("Enter values of array :");
	for(i=0;i<size;i++){
		scanf("%d", &array[i]);
	}
	for(i=0;i<size;i++){
		if(array[i]%2==0){
			count++;

		}
	}
	printf("The total number of even values are :%d ", count);
	return EXIT_SUCCESS;
}
