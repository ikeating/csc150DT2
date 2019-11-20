

#include <stdio.h>

int main()
{

int dogs = 6;

printf("Address\t\t Name\t Value\n");
printf("%p\t %s\t %i\n", &dogs, "dogs", dogs);

int *pDogs = &dogs;
printf("%p\t %s\t %i\n", pDogs, "dogs", dogs);

printf("%p\t %s\t %p\n", &pDogs, "pDogs", pDogs);

*pDogs = 34;
printf("\t\t\t\t%i\n", dogs);

   return(0);
}