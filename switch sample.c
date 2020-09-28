/*
 ============================================================================
 Name        : switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	printf("1 for porotta \n2for biriyani \n3 for fried rice \n4 for mandhi \nEnter your choice");
	scanf("%d",&choice);

	switch(choice){
	case 1:
		printf("You have selected porotta");
		break;
	case 2:
		printf("You have selected biriyani");
		break;
	case 3:
		printf("You have selected fried rice");
		break;
	case 4:
		printf("You have selected mandhi");
		break;
	default:
		printf("You are fool")
	}
	return EXIT_SUCCESS;
}
