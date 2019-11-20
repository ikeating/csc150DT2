#include <stdio.h>

int main()//                                                      Begin
{
   float item = 0;//                                              Float item = 0
   float sum = 0;//                                               Float sum = 0
   float mnSalesTax = 0.06875;//                                  Float mnSalesTax = 0.06875

   while(item >= 0)//                                             While item is greater than or equal to 0 do
   {
      sum = sum + item;//                                         sum = sum + item
      printf("\nEnter price of item (-1 if done) $");//           Output "Enter price of item (-1 if done) $"
      scanf("%f", &item);//                                       Input item
   }
   printf("\nThe sub-total is $%3.2f\n", sum);//                  Output "The sub-total is $<sum>"

   printf("%s %6.5f\n", "MN Sales tax rate is", mnSalesTax);//    Output "MN Sales tax rate is"mnSalesTax
   float totaltax = sum * mnSalesTax;//                           Float totaltax = sum * mnSalesTax
   printf("Total tax is $%3.2f\n", totaltax);//                   Output "Total tax is $<totaltax>"

   float total = totaltax + sum;//                                Float total = totaltax + sum
   printf("The grand total is $%3.2f\n",total);//                 Output "The grand total is $<total>"

   return(0);//                                                   End
}