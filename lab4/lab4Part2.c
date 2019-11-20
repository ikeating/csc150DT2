/*
Isaiah Keating
csc150DT2
lab 4 part 2
function for area of a circle
*/

/*
#include <stdio.h>

double circleArea(double radius);//declare the function - with parameters

int main()
{
   double radius = 4;

   double area = circleArea(radius);//invoke the function

   printf("%s %3.2f\n", "The area of the circle is", area);

   return(0);
}



double circleArea(double radius)//define the function
{

   const double pi = 3.14;

   return(pi * radius * radius);

}



#include <stdio.h>

double circleArea();//declare the function - no parameters

int main()
{
   double area = circleArea();//invoke the function

   printf("%s %3.2f\n", "The area of the circle is", area);

   return(0);
}



double circleArea()//define the function
{
   const double pi = 3.14;

   double radius = 4;

   double area = pi * radius * radius;

   return(area);
}
*/

/*
Isaiah Keating
csc150DT2
lab 4 part 2
function for area of a circle
*/
#include <stdio.h>//input output library

double circleArea(double radius);//declare the function - with a parameter from user input

int main()//main, the brains
{
   double radius;//initilize variable

   printf("\nEnter the radius of a circle:");//ask user for input
   scanf("%lf", &radius);//assigning user input to the memory address of variable radius

   double area = circleArea(radius);//invoke the function

   printf("%s %3.2f\n\n", "The area of the circle is", area);//output

   return(0);//return 0 to main
}



double circleArea(double radius)//define the function
{

   const double pi = 3.14;//declare variable

   return(pi * radius * radius);//return the function output to main

}