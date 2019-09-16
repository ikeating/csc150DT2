/*
Isaiah Keating
csc150 DT 2
lab3 part2

Write a program using a for loop
Write a program that prints “This is loop 1” and it numbers each loop so the next
line will be “This is loop 2”, etc. Go through four loops. At the end, outside
the loop, have it print “Number of loops = 4”

*/

#include <stdio.h>//header library standard input output
#include <unistd.h>//header library containing sleep

int main()//main function
{
   int a;//intitialize
   int sum = 0;//declare

   for (int a = 1; a <= 4; a++)//Initialization statemet, test expression, update statement
   {
      sum = a;//update sum
      printf("This is loop %i\n", a);//output a
      sleep(1);//loop sleeps 1 second
   }

   printf("\nNumber of loops = %i\n", sum);//output of sum

   return(0);//returning a value of 0 to main indicating success

}