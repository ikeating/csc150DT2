/*
Isaiah Keating
csc150DT2
lab8Part1
*/
#include <stdio.h>//header
#include <stdlib.h>//header

int main(void)//main function
{
   int *var1;//initializing pointer varible
   var1 = (int*)malloc(sizeof(int));//assigning memory in the heap for var1

   char *var2;//initializing pointer varible
   var2 = (char*)malloc(sizeof(char));//assigning memory in the heap for var2

   printf("\nStack address for var1 is \t%p\n", &var1);//output
   printf("Stack address for var2 is \t%p\n\n", &var2);

   printf("Heap address for var1 is \t%p\n", var1);
   printf("Heap address for var2 is \t%p\n", var2);

   free(var1);//freeing var1 memory from the heap

   printf("\nStack address for var1 is \t%p\n", &var1);
   printf("Stack address for var2 is \t%p\n\n", &var2);

   printf("Heap address for var1 is \t%p\n", var1);
   printf("Heap address for var2 is \t%p\n", var2);

   var1 = (int*)malloc(sizeof(int));//reassigning memory in the heap for var1

   printf("\nStack address for var1 is \t%p\n", &var1);
   printf("Stack address for var2 is \t%p\n\n", &var2);

   printf("Heap address for var1 is \t%p\n", var1);
   printf("Heap address for var2 is \t%p\n", var2);
}