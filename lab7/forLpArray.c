/*
Isaiah Keating
csc150DT2
lab7
*/


#include <stdio.h>

int main()
{
   int count[5] = {5,10,15,20,25};
   int i, total = 0;

   for (i =0; i < 5; i++)
   {
   	   printf("The space %i holds value %i\n", i, count[i]);//using the for loop to increment i to correspond to array
   	   total += count[i];
   }
   printf("The total is %i\n", total);

   return(0);
}