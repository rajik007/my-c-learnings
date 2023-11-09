/*
 ============================================================================
 Name        : for.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,number,limit=100;
	setbuf(stdout,NULL);

	printf("enter a number");
	scanf("%d",&number);
	for(i=2;i<=limit;i++){
		if(i%2==0){
			printf("%d\n",i);
		}

	}






	return EXIT_SUCCESS;
}
