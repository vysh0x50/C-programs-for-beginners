/*
 ============================================================================
 Name        : multidimentional_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rows,columns,i,j;
	int array[10][10];
	printf("Enter number of rows :");
	scanf("%d", &rows);
	printf("Enter number of columns :");
	scanf("%d", &columns);

	printf("Enter values of array :");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			scanf("%d", &array[i][j]);
		}
	}
	printf("Entered values are :\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
