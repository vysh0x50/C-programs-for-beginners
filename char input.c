/*
 ============================================================================
 Name        : char.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name;
	printf("Enter your name:");
	scanf("%c",&name);
	printf("Your name is:%c",name);
	return EXIT_SUCCESS;
}
