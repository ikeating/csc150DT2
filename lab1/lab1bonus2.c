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