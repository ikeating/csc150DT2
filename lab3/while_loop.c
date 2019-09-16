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




