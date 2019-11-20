/*Isaiah Keating
  csc150DT2
  lab11*/
#include <stdio.h>//standard io library
#include <string.h>//Can make software vulnerable to malicious users
/*   strlen() - Returns length of a string, does not count null char at end of array
     strcat() - adds to an array, concatenation
     strcpy() - replaces what is in the array completely
     strcmp() - Compares two array strings*/
#include <ctype.h>
/*   isdigit() - checks if a char is a number
     isalpha() - checks if a char is a letter
     isupper() - checks if char is upper case
     islower() - checks if char is lower case*/
int main()//main
{
   char disp[10][50], temp[50];//2D array & temp for sorting
   int i, j;//counter variables for loop
//  ###-------+>
   for(i = 0; i < 2; i++)//for loop to input elements into 2D array
      {
         for(j = 0; j < 3; j++)//nested for loop
            {
               setbuf(stdout, NULL);//set output tp NULL
               printf("Enter value for disp[%i][%i]:", i, j);//prompt
               scanf(" %c", &disp[i][j]);//input
            }
      }
//                  ###-------+>
   for(i=0;i<2;i++)//for loop using string.h library to sort array rows alphabetically
      {
         for(j=i+1;j<2;j++)//nested for loop containing algorithm to sort array rows
            {
               if (strcmp(disp[i],disp[j])>0)//conditional 
                  {
                     strcpy(temp, disp[i]);//move string i to temp
                     strcpy(disp[i], disp[j]);//move string j to i
                     strcpy(disp[j], temp);//move string temp to i
                  }
            }
      }
//                                 ###-------+>
   printf("Two Dimensional array elements:\n");//output

   for(i=0; i<2; i++)//for loop to output 2D array elements
      {
         for(j=0;j<3;j++)//nested for loop containing a conditional
            {
               printf("%c ", disp[i][j]);//output
               if(j==2)//conditional
                  {
                     printf("\n");//output escape sequence
                  }
            }
      }
//                                                  ###-------+>
   for (i=0; i<2; i++)//for loop using ctype.h to identify characters
      {
         int lower=0, upper=0, num=0, other=0;//local variables for this for loop.
                                              //IMPORTAINT if placed outside they will continue to accumulate

         for(j=0;j<3;j++)//nested for loop containing conditional
            { 
               int c = disp[i][j];//declaring and initilizing int variable

               if (islower(c))//conditional
                  lower++;//do
               else if (isupper(c))//else do
                  upper++;//do
               else if (isdigit(c))//else do
                  num++;//do
               else//else do
                  other++;//do
            }

         printf("Array row %i has %i U, %i L, %i N and %i characters\n", i, upper, lower, num, other);//output
      }
//                                                                   ###-------+>
   return (0);//return zero to main
}