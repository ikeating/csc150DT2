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