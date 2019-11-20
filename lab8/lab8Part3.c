/*
Isaiah Keating
csc150DT2
lab8Part3
*/
#include <stdio.h>//header
#include <stdlib.h>//header

int main()//main function
{
   int a;//initialize variable
   printf("Enter the array size: ");//ouput prompt
   scanf(" %i", &a);//input array size

   int *ptrArr;//initilize pointer
   ptrArr = (int*)malloc(a*sizeof(int));//allocate array space in heap
   //int *ptrArr = (int*)malloc(a*sizeof(int));

   for (int i = 0; i < a; i++)//for loop to fill array
   {
      ptrArr[i] = i + 1;//algorithm to fill array
   }

   for (int i = 0; i < a; i++)//for loop to print array
   {
      printf("%i ", ptrArr[i]);//output array
   }

   printf("\n");//output new line

   for (int i = 0; i < a; i++)//for loop to print array
   {
      if (i%2==1)//nested if condition using modulus operator
      {
         printf("%i ", ptrArr[i]);//output
      }
   }

   printf("\n");//output new line

   return(0);//return 0 to main
}