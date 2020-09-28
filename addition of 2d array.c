/*
 ============================================================================
 Name        : addition.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,i,j;
	int array1[100][100],array2[100][100],array3[100][100];
	printf("Enter the size of array :");
	scanf("%d", &size);
	printf("Enter the values of array 1");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d", &array1[i][j]);
		}
	}
	printf("Enter values of array 2");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d", &array2[i][j]);
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			array3[i][j]=array1[i][j]+array2[i][j];
		}
	}

	printf("Sum of 2 arrays is :\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d\t", array3[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
