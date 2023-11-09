/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int sum=0,i,limit,values[100];
	setbuf(stdout,NULL);
	printf("enter array limit");
	scanf("%d",&limit);
	printf("enter values");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
	for(i=0;i<limit;i++){

		sum=sum+values[i];
	}
	printf("The sum of total values are  %d",sum);
	return EXIT_SUCCESS;
}
