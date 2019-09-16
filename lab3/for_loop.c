/*

    (
     \
      )
}}}-------->
      )
     /
    (

*/

#include <stdio.h>
#include <unistd.h>

int main()
{

   int sum = 0;

   for (int a = 1; a <= 10; a++)
   {
      sum += a;
      printf("a = %i, sum = %i\n", a,sum);
      sleep(1);
   }

   return(0);

}