#include<stdio.h>
 int main()
 {
     int base, exponent,exponent1;
   int power=1;

     printf("Enter base and two Exponent: ");
     scanf("%d %d %d",&base,&exponent,&exponent1);


     while(exponent!=0)
     {
         power *= base; //power= power  * base
         exponent--;
     }
     while(exponent1!=0)
{
    power*=exponent1;
     exponent1--;
 }
     printf("Result = %d\n", power);

     return 0;
 }
