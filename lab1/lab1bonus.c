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