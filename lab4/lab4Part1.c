/*
Isaiah Keating
csc150DT2
lab 4 part 1
*/

//formula for the area of a parallelogram is A = bh

#include <stdio.h>//header library

double areaParallelogram();//declare the function

int main()//the brains

{

   printf("\n%s %3.2f\n\n", "The total area of the parallelogram is", areaParallelogram());//invoke the function

   return(0);//return 0 to main to indicate success
}



double areaParallelogram()//define the function
{
   double base = 4;//declaring base
   double hight = 5;//declaring hight

   double area = base * hight;//formula for area

   return (area);//return area to main

}