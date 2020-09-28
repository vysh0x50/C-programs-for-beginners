/*
 ============================================================================
 Name        : greatest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,num3;
	printf("Enter three numbers :");
    scanf("%d%d%d",&num1,&num2,&num3);

   if (num1>num2){

	   if(num1>num3){
		   printf("Greatest number is:%d",num1);
		  	   }else
		  		   printf("Greatest number is:%d",num3);
	      }else if(num2>num3){
	    	  printf("Greatest number is:%d",num2);
	      }else
	    	  printf("Greatest number is:%d",num3);
	return EXIT_SUCCESS;
}
