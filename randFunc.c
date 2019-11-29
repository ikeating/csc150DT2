#include<stdio.h>
#include<stdlib.h>//rand func
#include<time.h>//seed

int randNum();//declare the function

int main()
{
   //srand(time(NULL));//seed
   printf("%i\n", randNum());
   printf("%ld\n", time(NULL));
   return(0);
}

int randNum()
{
   srand(time(NULL));//seed
   int number = 1 + (rand() %6);//num from 1 to 6
   /*
   int number = a + rand() % n;
   a = the first number in your range
   n = the number of terms in your range
   (range computed by largest value - smallest value + 1)
   */
   return(number);
}