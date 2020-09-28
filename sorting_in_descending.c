/*
 ============================================================================
 Name        : sorting_in_descending.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,size,temp;
	int array[100];
	printf("Enter size of array :");
	scanf("%d", &size);
	printf("Enter values of array :");
	for(i=0;i<size;i++){
		scanf("%d", &array[i]);
	}
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(array[i]<array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
		}
	printf("The sorted values are :");
		for(i=0;i<size;i++){
			printf("%d\t", array[i]);
	}
	return EXIT_SUCCESS;
}
