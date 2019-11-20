/*
Isaiah Keating
csc150DT2
lab 4 part 1 sub 2 with parameters
*/

//formula for the area of a parallelogram is A = bh

#include <stdio.h>//header library

double areaParallelogram();//declare the function

int main()//the brains

{
   double base = 4;//declare base
   double hight = 7;//declare hight

   printf("\n%s %3.2f\n\n", "The total area of the parallelogram is", areaParallelogram());//invoke the function

   return(0);//return 0 to main to indicate success
}



double areaParallelogram(double base, double hight)//define the function containing parameters
{

   double area = base * hight;//formula for area

   return (area);//return area to main

}