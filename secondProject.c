/*
 ============================================================================
 Name        : secondProject.c
 Author      : Arion Almond
 Version     :
 Copyright   : Open Source
 Description : This project dynamically allocates an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int main(void)
{
   int a;
   int *p_array;
   int i;

   printf("Enter the number of bytes to dynamically allocate:");
   scanf("%d", &a);
   printf("Numbers in dynamically allocated memory: %d\n", a);

   p_array = (int *)malloc(a * sizeof(int));

   for(i=0; i<a; i++)
   {
	   p_array[i]=i;
   }

   for(i=0;i<a;i++)
   {
	   printf("%10d", p_array[i]);
	   if ((i+1)%10 == 0)
		   printf("\n");

   }
   return 0;
}
