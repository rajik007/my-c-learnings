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
	int(choice);
	setbuf(stdout,NULL);
	printf("1 for january \n2 for feb \n3 for march \n4 for april \n5 for may \n6 for jun \n7 for july \n8 for aug \n9 for sep \n10 for oct \n11 for nov \n12 for dec \nenter your choice");
	scanf ("%d",&choice);
	switch (choice){
	case 1:
	printf ("you selected january");
	break;
	case 2:
		printf ("you selected feb");
		break;
	case 3:
		printf ("you selected march");
		break;
	case 4:
		printf ("you selected april");
		break;
	case 5:
		printf ("you selected may");
		break;
	case 6:
		printf ("you selected jun");
		break;
	case 7:
		printf ("you selected july");
		break;
	case 8:
		printf ("you selected august");
		break;
	case 9:
		printf ("you selected sep");
		break;
	case 10:
		printf ("you selected oct");
		break;
	case 11:
		printf ("you selected nov");
		break;
	case 12:
		printf(" you have selected dec");
		break;
	default:
		printf ("invalid entry");

	}
	return EXIT_SUCCESS;
}
