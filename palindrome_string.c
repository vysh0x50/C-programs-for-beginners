/*
 ============================================================================
 Name        : palindrome_string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char string[20];
	int i,length,flag=0;
	printf("Enter a string :");
	scanf("%s", string);
	length=strlen(string);

	for(i=0;i<length;i++){
		if(string[i]!=string[length-i-1]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("String is not a palindrome");
		}else{
			printf("String is a palindrome");
		}
	return EXIT_SUCCESS;
}
