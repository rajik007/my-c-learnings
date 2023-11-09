/*
 ============================================================================
 Name        : nested.c
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
	setbuf(stdout,NULL);
	printf("enter 3 numbers");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2){
		printf("the greater number is %d",num1);
	}

	return EXIT_SUCCESS;
}
