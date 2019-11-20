#include<stdio.h>

int main()//                                                 Begin
{ 
   int counter, numitems=0;//                                Integer counter, numitems=0
   float inpn;//                                             Float inpn
   float sum=0;//                                            Float sum=0

   printf("Enter total number of items: ");//                Output "Enter total number of items: "
   scanf("%i", &numitems);//                                 Input numitems
   
   for(counter=1; counter<=numitems; ++counter)//            For counter = 1, counter <= numitems, +1 to counter
   {
      printf("Enter price of item %i $",counter);//          Output "Enter price of item <counter> $"
      scanf("%f",&inpn);//                                   Input inpn
      sum = sum + inpn;//                                    sum = sum + inpn
   } 
   printf("Sub-total of items = %3.2f\n",sum);//             Output "Sub-total of items = <sum>"

   float mnSalesTax = 0.06875;//                             Float mnSalesTax = 0.06875
   printf("%s %6.5f\n", "MN Sales tax is", mnSalesTax);//    Output "MN Sales tax is <mnSalesTax>"
   float totaltax = sum * mnSalesTax;//                      Float totaltax = sum times mnSalesTax
   float total = totaltax + sum;//                           Float total = totaltax + sum

   printf("Total %3.2f\n",total);//                          Output "Total <total>"

   float coupon;//                                           Float coupon
   printf("Enter dollar amount of coupon $");//              Output "Enter dollar amount of coupon $"
   scanf("%f",&coupon);//                                    Input coupon

   float shipping;//                                         Float shipping
   printf("Enter dollar amount for shipping $");//           Output "Enter dollar amount for shipping $"
   scanf("%f",&shipping);//                                  Input shipping

   float grandTotal = total - coupon + shipping;//           grandTotal = total - coupon + shipping

   printf("\nThe grand total is $ %3.2f\n", grandTotal);//   Output "The grand total is $ <grandTotal>"

   return(0);//                                              End
}