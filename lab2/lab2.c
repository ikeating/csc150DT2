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