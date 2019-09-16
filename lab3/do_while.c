/*
Isaiah Keating
*/






#include <stdio.h>//
#include <unistd.h>//

int main()//main function

{

   int x = 1, sum = 0;//intitialize x and sum
   do//start
   {
      printf("%i\n", x);//print x
      sum += x;//sum = sum + x
      x++;//increment x
      sleep(1);//sleep 1 second

   }
   while (x <=10);//condition
   printf("sum = %i\n", sum);//prints sum

   return(0);//return int for main
}