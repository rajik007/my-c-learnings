/*
 ============================================================================
 Name        : day6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[20];
	setbuf(stdout,NULL);


	printf("enter a name\n");
	scanf("%s[\n]",name);
	printf("entered name is : %s",name);
	return EXIT_SUCCESS;
}
