/*
Isaiah Keating
csc150DT2
lab10Part2
*/

# include <stdio.h>//header

union id//union
{
   int age;//int
   char *first;//char pointer
   char *last;//char pointer
};

int main()//start
{
   union id person1;//initilize object person1

   person1.age = 45;//declare member
   person1.first = "Isaiah";//declare a NEW replacement member
   person1.last = "Keating";//and then declare another replacement member

   printf("%s %s\n", person1.first, person1.last);//Example of union, when run
   //              only the last variable is kept so both strings are the same

   printf("%i\n", person1.age);//last variable is person1.last so int version of
   //                            that is printed, not age

   //The following example demonstrates how this use of one memory location

   person1.first = "Isaiah";//declare
   printf("%s\n", person1.first);//output
   person1.last = "Keating";//replace with new
   printf("%s\n", person1.last);//output
   person1.age = 45;//replace with new
   printf("%i\n", person1.age);//output

   return(0);//return zero
}

/*
struct allocates memory for all its members while
union only allocates memory for one storage space for
all it's members.
*/