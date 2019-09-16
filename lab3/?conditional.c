/*
Isaiah Keating

?:conditional 
It's a shortcut way to do the if-else statement
Three operands
expression1 ? expression2 : expression 3
If expression 1 is true then expression2
If expression1 is false then expression3
*/

#include <stdio.h>

int main()

{

   int a = 34;//declare a
   int b;//initialize b

   b = (a < 10 ? 10:20);

   printf("\n%i\n\n", b);

   return 0;
}