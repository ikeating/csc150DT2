/*
Isaiah Keating
csc150DT2
lab10Part1
*/

# include <stdio.h>//io header
# include <string.h>//string header

struct id//2 bytes, total struct size is 46 bytes
{
   int age;//4 bytes
   char first[20];//20 bytes
   char last[20];//20 bytes
};
int main()//main
{
   struct id person[3];//initilize three struct objects

   strcpy(person[0].first, "Isaiah");//strcpy
   strcpy(person[0].last, "Keating");//string input
   person[0].age = 45;//int input

   puts("Enter person 2's first name: ");//puts/gets
   gets(person[1].first);//gets string
   puts("Enter person 2's last name: ");//output
   gets(person[1].last);//gets string
   printf("Enter person 2's age: ");//prompt
   scanf(" %i", &person[1].age);//input int

   struct id *ptr;//initilizing a struct id obect pointer
   ptr = &person[2];//declare ptr to contain the address of struct object person[2]
   
   printf("Enter person 3's first name: \n");//prompt
   scanf(" %s", ptr->first);//inputting string using pointer
   printf("Enter person 3's last name: \n");//prompt
   scanf(" %s", ptr->last);//inputting string using pointer
   printf("Enter person 3's age: ");//prompt
   scanf(" %i", &ptr->age);//inputting int using pointer

   printf("Person 1's name and age is: %s %s %i\n", person[0].first, person[0].last, person[0].age);//output person 1
   printf("Person 2's name and age is: %s %s %i\n", person[1].first, person[1].last, person[1].age);//output person 2
   printf("Person 3's name and age is: %s %s %i\n", ptr->first, ptr->last, ptr->age);//output person 3

   return(0);//return 0 to main
}