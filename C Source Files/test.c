#include<stdio.h>
int main ()
{
    int i , j , n, count = 0 ;
    scanf("%d",&n);

    for (i=0;i<n;i++)
        {

            for (j=0;j<n;j++)
            {

                count = count+1 ;

            }
        }
    printf("Count = %d\n",count);
    return 0 ;
}
