/*
Isaiah Keating
csc150DT2
lab10Part3
*/

# include <stdio.h>//header

struct bike//struct
{
   char *make;//pointer string
   int serialNumber;//int
   char *model;//pointer string
};

union owner//union
{
   int idNumber;//int
};

int main()//main
{
   struct bike bike[200];//declaring 200 struct objects

   bike[0].make = "Huffy";//declaring string to make 0
   bike[0].serialNumber = 12345;//declaring int to serialNumber 0
   bike[0].model = "Mountain";//declaring string to model

   union owner idOwner[200];//declaring 200 union objects

   idOwner[0].idNumber = 1;//declaring idOwner 0 to have id 1

   printf("Owner %i owns a %s %s serial number %i\n", idOwner[0].idNumber, bike[0].make, bike[0].model, bike[0].serialNumber);//output

   return(0);//return zero to main
}