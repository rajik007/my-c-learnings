/*
 ============================================================================
 Name        : switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int (choice);
	setbuf(stdout,NULL);
	printf("1 for parotta \n2 for briyani \n3 for fried rice \n4 for noodles \nenter your choice");
	scanf ("%d",&choice);
	switch(choice){
	case 1:
		printf("you have selected parotta");
		break;
	case 2:
		printf("you have selected briyani");
		break;
	case 3:
		printf("you have selected fried rice");
		break;
	case 4:
		printf("you have selected noodles");
		break;
	default:
		printf("fool");


	}
	return EXIT_SUCCESS;
}
