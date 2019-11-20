/*
Isaiah Keating
csc150DT2
lab6Part1
*/

#include <stdio.h>

int main()//begin
{
   //Using type int for lab6Part1
   int runs = 6;//declares runs as a variable uing type int

   printf("Address\t\tName\tValue\n");//outputting headers for columns
   printf("%p\t%s\t%i\n", &runs, "runs", runs);//output string's address, name and value

   int *ptrRuns = &runs;//declaring ptrRuns to be a pointer and assigning the address of runs as the value

   printf("%p\t%s\t%p\n\n", &ptrRuns, "ptrRuns", ptrRuns);//outputting ptrRuns's address, name and value

   //Using type string for lab6Part1
   char *string = "Hello";//declares string as a variable using type string

   printf("Address\t\tName\t\tValue\n");//outputting headers for columns
   printf("%p\t%s\t\t%s\n", &string, "string", string);//output string's address, name and value

   char **ptrString = &string;//declaring ptrString to be a pointer and assigning the address of string as the value

   printf("%p\t%s\t%p\n", &ptrString, "ptrString", ptrString);//outputting ptrString's address, name and value

   //*ptrString = "Goodby";//changes the value stored within string

   //printf("%c\n", **ptrString);//this prints the first char of the string

   //printf("%s\n", *ptrString);//this prints the whole string

   return(0);//end
}

//took awhile to figure out I needed a double pointer for string variable of type string...