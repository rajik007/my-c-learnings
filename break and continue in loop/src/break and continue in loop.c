/*
 ============================================================================
 Name        : break.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n;
	setbuf(stdout,NULL);
	printf("enter a number");
	scanf("%d",&n);

	for(i=1;i<n;i++){
		printf("\n hi");
		if(i==5){
			continue;}
			printf(" hello");}
		printf("\n finished");


	return EXIT_SUCCESS;
}
