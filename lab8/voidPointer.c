#include <stdio.h>

int main()
{
   void *ptrx;//void pointer
   int z = 10;
   ptrx = &z;

   int *ptry = ptrx;//create a new pointer with the type you want

   printf("%p\n", ptrx);
   printf("%p\n", &z);
   printf("%i\n", *ptry);//using ptry to dereference ptrx

   return(0);
}