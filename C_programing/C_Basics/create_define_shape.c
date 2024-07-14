/*
 ============================================================================
 Name        : create_define_shape.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i,x;
		for(i=0 ; i<10 ; i++)
		{

			for(x=0 ; x<10 ; x++)
			{
				printf("%d",(x+i));

				if((x+i)>=9)
				{
					break;
				}
			}

			printf("\n");



		}


	}


