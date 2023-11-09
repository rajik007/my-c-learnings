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
	int limit,values[100],i,j,temp;
	setbuf(stdout,NULL);
	printf("enter a limit");
	scanf("%d",&limit);
	printf("enter values");

	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
	for(i=0;i<limit-1;i++)
	{
		for(j=i+1;j<limit;j++){
			if(values[i]>values[j]){
				temp=values[i];
				values[i]=values[j];
				values[j]=temp;

			}
		}
	}printf("sorted array values : ");

	for(i=0;i<limit;i++){
         printf ("%d \t",values[i]);
	}






	return EXIT_SUCCESS;
}
