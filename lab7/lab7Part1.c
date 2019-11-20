/*
Isaiah Keating
csc150DT2
lab7Part1
*/


#include <stdio.h>//standard io lib

int main()//begin
{
   char str1[18] = "what is your name";//intializing string array
   
   char *str2 = "hello";//intializing string pointer

   printf("%s\n", str1);//output array
   printf("%s\n", str2);//output string str2

   //printf("%c\n", *str2);//outputs the first char in str2
   
   str2 = "goodby";//changing str2 string

   printf("%s\n", str2);//output str2

   //printf("%c\n", *str2);//outputs the first char in str2

   return(0);//end
}