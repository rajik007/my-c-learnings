/*
 ============================================================================
 Name        : function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int main(void) {
	int a,b;
	int res;
	setbuf(stdout,NULL);
	printf("Enter 2 values");
	scanf("%d%d",&a,&b);
	res=sum(a,b);

	printf("the result is %d ",res);

	return EXIT_SUCCESS;
}
int sum(int num1, int num2){
	int result;
	result=num1+num2;
return result;
}
