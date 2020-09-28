/*
 ============================================================================
 Name        : BasicMathschoice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,choice,result;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);

	printf("1 for addition \n2for subtraction \n3 for multiplication \n4 for division \nEnter your choice");
	scanf("%d",&choice);

	if(choice==1){
		result=num1+num2;
		printf("Result=%d",result);
	}else if(choice==2){
		result=num1-num2;
		printf("Result=%d",result);
	}else if(choice==3){
		result=num1*num2;
		printf("Result=%d",result);
	}else if(choice==4){
		result=num1/num2;
		printf("Result=%d",result);
	}else
		printf("You are fool");
	return EXIT_SUCCESS;
}
