/*
Isaiah Keating
csc150DT2
lab11
*/
# include <stdio.h>
# include <string.h>
# include <ctype.h>

int i, j;

int main()
{
   char str[10][50], temp[50];

   printf("Enter 5 names:\n");
   for(i = 0; i < 5; ++i)
      {
         fgets(str[i], sizeof(str[i]), stdin);
      }
      
   for(i = 0; i < 5; ++i)
      {
         for(j = i + 1; j < 5; ++j)
            {
               if (strcmp(str[i], str[j]) > 0)
                  {
                     strcpy(temp, str[i]);
                     strcpy(str[i], str[j]);
                     strcpy(str[j], temp);
                  }
            }
      }
   printf("\nAlphabetical sorted list of names entered: \n");

   for (i = 0; i < 5; ++i)
      {
         printf("%s", str[i]);
      }

   return 0;
}