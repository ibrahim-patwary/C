#include<stdio.h>
int main()
{
    int a[10],b[10],i,j=9;
    printf("Enter 10 integers :-\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("There are 10 integers= ");
    for(i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0; i<10; i++,j--)
    {
        b[i]=a[j];
    }
    printf("\nThere are 10 reverse integers= ");

    for(i=0; i<10; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
