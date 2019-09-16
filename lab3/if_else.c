/*
Isaiah Keating
*/

#include <stdio.h>

int main()

{
   double pi = 3.14;
   double a = 3.13;

   if (a == pi)
   {
      printf("\nCorrect pi is %3.2f\n\n", pi);
   }
   else
   {
      printf("\nIncorrect %3.2f is not %3.2f\n\n", a, pi);
   }

   return 0;
}
