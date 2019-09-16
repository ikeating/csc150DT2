/*
Isaiah Keating
csc150 DT 2
lab3 part1

Choose any three: if/else statement, ?: conditional or a switch/case/break
Write a program that makes n = 3. Design your own statements for the program.
Try to make it a bit different from the demo and use your creativity.
*/

#include <stdio.h>//header library standard input output

int main()//main function
{

   int n;//initilize n

   printf("Guess what integer n is:");//output a string
   scanf("%i", &n);//user input, declares input as an integer and assigns it to variable n

   if (n != 3)//condition, if expression is false
   {
      n = n * 0 + 3;//expression making n = 3. Could have just declared n = 3;...
      printf("Incorrect n is %i\n", n);//outputting corrected answer, body of if
   }
   else//if condition false then else
   {
      printf("Correct! n equals %i\n", n);//outputting correct answer, body of else
   }

   return(0);//returning a value of 0 to main indicating success

}