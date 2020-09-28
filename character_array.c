/*
 ============================================================================
 Name        : character_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, ANSI-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[20];
	printf("Enter a name :");
	scanf("%s", name);

	printf("Entered name is %s", name);
	return EXIT_SUCCESS;
}
