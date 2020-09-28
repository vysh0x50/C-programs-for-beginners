/*
 ============================================================================
 Name        : array_search.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,searchKey,flag=0;
	int values[100];
	printf("Enter your limit :");
	scanf("%d", &limit);
	printf("Enter your values :");
	for(i=0;i<limit;i++){
		scanf("%d", &values[i]);
	}
	printf("Enter your search key :");
	scanf("%d", &searchKey);

	for(i=0;i<limit;i++){
		if(searchKey==values[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("Key found at position %d", i+1);
	}else{
		printf("Key not found");
	}
	return EXIT_SUCCESS;
}
