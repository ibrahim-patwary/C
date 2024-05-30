#include<stdio.h>
void main()
{
    int a[10],i,f,pos=0;
    printf("Enter 10 integers :-");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the integer to find:-");
    scanf("%d",&f);
    for(i=0; i<10; i++)
    {
        if(a[i]==f)
        {
            pos++;
            break ;
        }

    }
    if(pos==-1)
    {
        printf("The number is not found. \n");
    }

    else
    {
        printf("The number is found. \n");
    }
}
