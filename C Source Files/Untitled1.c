#include<stdio.h>
void two_dimentional(int ar[3][3])
{
     int i,j;
     for (i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
          {
               printf("%d ",ar[i][j]);
          }
           printf("\n");
     }

}
void row_summation(int s[3][3])
{
    int i,j,f=1,sum=0;
    for (i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
          {
               sum=sum+s[i][j];
          }
           printf("The summation of %d th row value = %d \n",f,sum);
        f++;
     }

}

int main()
{
 int a[3][3],i,j;
printf("Enter the values = ");
  for (i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
          {
               scanf("%d",& a[i][j]);
          }
     }
 two_dimentional(a);
 row_summation(a);
 return 0;
}
