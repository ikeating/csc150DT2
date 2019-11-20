/*
Isaiah Keating
csc150DT2
lab11
*/
# include <stdio.h>
# include <string.h>//Can make software vulnerable to malicious users
/*   strlen() - Returns length of a string, does not count null char at end of array
     strcat() - adds to an array, concatenation
     strcpy() - replaces what is in the array completely
     strcmp() - Compares two array strings
*/
# include <ctype.h>
/*   isdigit() - checks if a character is a number
     isalpha() - checks if a character is a letter
     isupper() - checks if character is upper case
     islower() - checks if character is lower case
*/
int main()
{
   char password[10];
   printf("Enter a password: ");
   scanf("%s", password);

   int length, i, lower, upper, num, other;
   length = strlen(password);

   for (i = 0; i < length; i++)//nested for loop
   {
      int c = password[i];

      if (islower(c))
         lower++;

      else if (isupper(c))
         upper++;

      else if (isdigit(c))
         num++;

      else
         other++;
   }
   printf("Password has %i U, %i L, %i N and %i characters\n", upper, lower, num, other);

   char mypass[50] = "My password is ";
   printf("%s\n", mypass);
   strcat(mypass, password);
   printf("%s\n", mypass);

   char oldpass[10] = "Frogfish1";

   if (strcmp(password, oldpass) == 0)
      printf("That's the same password as last time\n");
   else
      printf("That's a great password\n");

   return 0;
}