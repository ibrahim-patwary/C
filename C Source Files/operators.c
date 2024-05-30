#include<stdio.h>

int main(){

int sum1 = 100 + 50;
printf("Summation is  : %d \n", sum1);

float  sub = 10.58 - 3.70 ;
printf("Subtraction is  : %f \n", sub);
int x = 5;
int y = 3;
printf("%d", x > y); // returns 1 (true) because 5 is greater than 3

int myInt;
float myFloat;
double myDouble;
char myChar;

printf("%lu\n", sizeof(myInt));
printf("%lu\n", sizeof(myFloat));
printf("%lu\n", sizeof(myDouble));
printf("%lu\n", sizeof(myChar));
return  0  ;

}



