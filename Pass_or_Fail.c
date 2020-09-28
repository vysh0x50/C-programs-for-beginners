/*
 ============================================================================
 Name        : Pass_or_Fail.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	printf("Enter your mark");
	scanf("%f",&mark);

	if(mark>=50){
		printf("Congrats !!! You have passed");
	}else{
		printf("Oops !!! You have failed");
	}

	return EXIT_SUCCESS;
}
