/*
Isaiah Keating
csc150DT2
lab7Part2
*/


#include <stdio.h>//standard input output header lib
#include <stdlib.h>//header lib for rand

int main()//start main function
{
   int sum = 0, i, temp, swap, games = 10;//initialize variables
   int scores[games];//intialize array

   for(i = 0; i < games; i++)//i = 0, for as long as i is less than games, add 1 to i
   {
   	   scores[i] = (rand() %50);//scores[i] = random number up to 50
   }
   
   printf("Soccer scores\n");//output text

   for(i = 0; i < games; i++)//i = 0, for as long as i is less than games, add 1 to i
   {
   	   printf("%i, ", scores[i]);//output scores
         sum = sum + scores[i];//equation for summing up total of all scores
   }
   
   printf("\n");//new line

   while(1)//beggining of swap algorithm, while true DO
   {
   	   swap = 0;//declare swap = 0

   	   for (i=0; i<games; i++)//i = o, for as long as i is less than games, add 1 to i
   	   {
   	   	   if(scores[i] < scores[i+1])//conditional - flipped inequality to change from ascending to descending
   	   	   {
   	   	   	   temp = scores[i];//using temp to hold value
   	   	   	   scores[i] = scores[i+1];//replace 1st value with 2nd
   	   	   	   scores[i+1] = temp;//replace 2nd value with temp
   	   	   	   swap = 1;//declare swap = 1
   	   	   }
   	   }

   	   if (swap == 0)//if swap equals zero then the list is sorted
   	   {
   	   	   break;//break out of loop
   	   }

   }//end of swap algorithm

   printf("Soccer Scores List\n");//output text
   for (i=1; i<=games; i++)//i = 1, for as long as i is less than or equal to games, add 1 to i
   {
   	   printf("%i, ", scores[i]);//output scores
   }
   printf("\n");//new line

   printf("The total sum of all scores of the ten games is %i\n", sum);//output sum

   return(0);//end
}