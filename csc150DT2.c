/*
*Isaiah Keating
*csc150 DT2
*lab1
*/

//the stdio.h imports a header file required for the functions
//we want to call in our program
#include <stdio.h>

//the execution of the program starts from the main() function
int main()
{
	//the function printf() displays the string inside the quation marks
   printf("Hello, World!");

   //the return 0; ends the program, also indicates successful
   //execution of the main() function
   return 0;
}

//#############################################################################

/*
Isaiah Keating
csc150 DT2
08/30/2019
lab1bonus


I found the following code example at
https://codeforwin.org/2018/01/c-program-create-file-write-contents.html
*/


#include <stdio.h>//header file 
#include <stdlib.h>//header file

#define DATA_SIZE 1000//limit of 1000 char

int main()
{
	char data[DATA_SIZE];

	FILE * fPtr;

	fPtr = fopen("/Users/isaiahkeating/Desktop/csc150/lab1/bonus.txt", "w");/* a file pointer that
	opens or creates a file at the chosen location.  the "W" means write.*/

	if(fPtr == NULL)//if you failed to enter a location pointer its going to fail
	{
		printf("Unable to create file.\n");
		exit(EXIT_FAILURE);
	}

	printf("Enter contents to store in file : \n");

	fgets(data, DATA_SIZE, stdin);

	

	fputs(data, fPtr);//creates the data file at the location of the pointer 

	fclose(fPtr);//closes the pointer file

	printf("File created and saved successfully. :) \n");

	return 0;//if you make it here congrads
	
}

//###################################################################################

/*
Isaiah Keating
csc150 DT 2
lab1 bonus
*/

#include <stdio.h>

int main(){
	FILE *fp;
	char ch;
	fp=fopen("/Users/isaiahkeating/Desktop/csc150/lab1/bonus2.txt","w");//create a new file or open a existing file
	fprintf(fp,"I love programming! \n");//writes a set of data to a file
	putc(ch,fp);//writes a character to a file
	fclose(fp);//closes a file
	return 0;
}

//#######################################################################################

/*
Isaiah Keating
csc150 DT 2
lab2
*/

#include <stdio.h>

int global = 12;

int main(void)//void main() did not work
{
	char a = 'a';
	int b;
	float c = 3.1;
	double d = 3.14;

	double f = c + d;//expression

	int k = 6;
	int g = 1;
	int h = 2;

	int l = k * h + k / 2;//expression

	char *i = "firstword";//pointer to the top of the string
	char j[] = "secondword";//array


	const int e = 2019;//read only


	b = 5;

	b++;//adds one

	printf("%i\n", b);
	printf("%i\n", e);

	printf("%2.1f\n", c);//formats the float two digits, one after the decimal
	printf("%3.2f\n", d);//formts the float three digits, two after the decimal

	printf("%i\n", l);
	printf("%3.2f\n", f);

	printf("%s\n", i);
	printf("%s\n", j);

	printf("first line\nsecond line\tthis is tab\n");

	printf("%i\n", global);

	return 0;
	
}

//###################################################################################

/*
Isaiah Keating
csc150 DT 2
Lab 2 part 1
*/

#include <stdio.h>//header standard input output

int main(){

int a = 15;//declaring variables
int b = 5;
int c = a + b;//expression

char *st1 = "when you add ";//strings declared two ways
char st2[] = " and ";
char st3[] = "the answer is ";

printf("%s", st1);//outputs
printf("%i", a);
printf("%s", st2);
printf("%i\n", b);
printf("%s", st3);
printf("%i\n", c);

	return 0;
}

//######################################################################################

/*
Isaiah Keating
csc150 DT 2
lab2_part2
*/

#include <stdio.h>

int main(){

	char *a = "\nThe total number of treats\nRocky has had at the end of the\nweek is ";

	int reg = 2;//declaring variables
	int good = 4;
	int regday = 6;
	int goodday = 1;

	int total = ((regday * reg) + (goodday * good));//expression

	printf("%s", a);//output
	printf("%i\n\n", total);

	return 0;
}

//#############################################################################################

/*
Isaiah Keating
csc150 DT 2
lab3 part1

Choose any three: if/else statement, ?: conditional or a switch/case/break
Write a program that makes n = 3. Design your own statements for the program.
Try to make it a bit different from the demo and use your creativity.
*/

#include <stdio.h>//header library standard input output

int main()//main function
{

   int n;//initilize n

   printf("Guess what integer n is:");//output a string
   scanf("%i", &n);//user input, declares input as an integer and assigns it to variable n

   if (n != 3)//condition, if expression is false
   {
      n = n * 0 + 3;//expression making n = 3. Could have just declared n = 3;...
      printf("Incorrect n is %i\n", n);//outputting corrected answer, body of if
   }
   else//if condition false then else
   {
      printf("Correct! n equals %i\n", n);//outputting correct answer, body of else
   }

   return(0);//returning a value of 0 to main indicating success

}

//###########################################################################################

/*
Isaiah Keating
csc150 DT 2
lab3 part2

Write a program using a for loop
Write a program that prints “This is loop 1” and it numbers each loop so the next
line will be “This is loop 2”, etc. Go through four loops. At the end, outside
the loop, have it print “Number of loops = 4”

*/

#include <stdio.h>//header library standard input output
#include <unistd.h>//header library containing sleep

int main()//main function
{
   int a;//intitialize
   int sum = 0;//declare

   for (int a = 1; a <= 4; a++)//Initialization statemet, test expression, update statement
   {
      sum = a;//update sum
      printf("This is loop %i\n", a);//output a
      sleep(1);//loop sleeps 1 second
   }

   printf("\nNumber of loops = %i\n", sum);//output of sum

   return(0);//returning a value of 0 to main indicating success

}

//############################################################################################

/*
Isaiah Keating

?:conditional 
It's a shortcut way to do the if-else statement
Three operands
expression1 ? expression2 : expression 3
If expression 1 is true then expression2
If expression1 is false then expression3
*/

#include <stdio.h>

int main()

{

   int a = 34;//declare a
   int b;//initialize b

   b = (a < 10 ? 10:20);

   printf("\n%i\n\n", b);

   return 0;
}

//###############################################################################################

/*
Isaiah Keating
*/






#include <stdio.h>//
#include <unistd.h>//

int main()//main function

{

   int x = 1, sum = 0;//intitialize x and sum
   do//start
   {
      printf("%i\n", x);//print x
      sum += x;//sum = sum + x
      x++;//increment x
      sleep(1);//sleep 1 second

   }
   while (x <=10);//condition
   printf("sum = %i\n", sum);//prints sum

   return(0);//return int for main
}

//##############################################################################################

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

//###############################################################################################

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

//##############################################################################################

/*
Isaiah Keating
*/


#include <stdio.h>

int main()

{

   int x =2;

   printf("\n");

   switch(x)
   {
      case 1: printf("it is 1");
         break;
      case 2: printf("it is 2");
         break;
      case 3: printf("it is 3");
         break;
      default: printf("none of them");
         break;
   }

   printf("\n\n");

   return 0;
}

//##############################################################################################

/*
                        _________________
Isaiah Keating				| Initialization|
csc150 DT 2					-----------------
while loop							|
								   \|/
								   / \
								  /   \
								 /	   \		___________
						False	/		\	   | Increment/|
					  ---------|Condition|<----| Decrement |
					 |			\		/		-----------
					 |			 \     /			/\
					 |			  \	  /				|
					 |			   \ /				|
					 |				|	True		|
					 |			   \|/				|
					 |		   ------------			|
					 |		  | Statements |---------
					 |		  |____________|
					 |
					 |				___
					 |			  /		\
					  ---------->|End for|
					  			  \		/
									---
*/

#include <stdio.h>//standard input output header library
#include <unistd.h>//header library containing sleep

int main(void)

{
   int x = 10;

   while (x >=1)//condition
   {
      printf("%i\n", x);
      x--;
      sleep(1);
   }

   return 0;
}

//##############################################################################################
