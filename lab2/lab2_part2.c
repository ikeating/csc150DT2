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