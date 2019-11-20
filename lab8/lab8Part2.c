/*
Isaiah Keating
csc150DT2
lab8Part2
*/
#include <stdio.h>//header

int main()//main function
{
   char name[30];//initialize string array
   char movie[30];//initialize string array
   int year;//initialize int variable
   //char temp;//initialize char variable

   printf("Please enter your name: ");//output question
   scanf(" %[^\n]", name);//scan/input everything until it encounters enter/new line

   //scanf(" %c",&temp);// temp statement to clear buffer

   printf("Please enter your favorite movie: ");//output question
   scanf(" %[^\n]", movie);//scan/input everything until it encounters enter/new line

   printf("What year did the movie come out? ");//output question
   scanf(" %i", &year);//input year

   printf("\nMy name is %s and I like the movie %s\n", name, movie);//output data obtained from input
   printf("that came out in the year %i\n\n", year);//output data obtained from input

   return(0);//end return 0 to main
}