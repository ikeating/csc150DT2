/*
Isaiah Keating
csc150DT2
lab6Part2
*/

#include <stdio.h>//standard io lib

int main()//begin
{

   char *st1 = "string number one";//pointer style
   char st2[] = "string number two";//array style

   printf("Address\t\t Name\t Value\n");//output headers for columns
   printf("%p\t %s\t %s\n", &st1, "st1", st1);//output address, name and value for st1
   printf("%p\t %s\t %s\n", &st2, "st2", st2);//output address, name and value for st2

   return (0);//end

}