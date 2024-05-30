#include<stdio.h>
int main() {

int num ,num1,num2 ;
printf("Enter your numbers : ");
scanf("%d %d %d",&num ,&num1 ,&num2);

if (num > num1 && num>num2)
  printf("The greatest number is : %d",num);
else if (num1>num && num1>num2)
   printf("The greatest number is : %d",num1);
else
   printf("The greatest number is : %d",num2);


return 0 ;
}




