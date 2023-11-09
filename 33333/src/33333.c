/*
 ============================================================================
 Name        : 33333.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	float num1,num2,average;
	printf("enter 2 numbers");
	scanf("%f%f",&num1,&num2);
	average=(num1+num2)/2;
	
	printf("the average is : %f",average);

	return EXIT_SUCCESS;
}

