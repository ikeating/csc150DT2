/*

*/

#include <stdio.h>

int main()
{

int x = 5;//declare an int variable
int *y;//declare a pointer variable
y = &x;//pointer is address of x
//int i = *y;//variables for value in y address


printf("value of x is %i\n", x);//x

printf("the value of y is %p\n", y);//address of x

printf("the value of *y is %i\n", *y);//value of x

printf("the address of x is %p\n", &x);//address of x

printf("the address of y is %p\n", &y);//address of y


   return(0);
}