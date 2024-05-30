#include <stdio.h>
int main ()
{
    int a [10],b,i;
    printf("Enter The Size Of Array :- ");
    scanf("%d",&b);
//........................TRAVERSING........................................
    printf("\nEnter The Value Of Array Elements :-  ");

    for(i=0; i<b; i++)
    {
        scanf("%d",&a[i]);

    }

    printf("\nThe Value Of Array Elements Are :-  ");

    for(i=0; i<b; i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");
//.........................ANY POSITION, INSERTION........................................
    int pos, num ;
    if(b>10)
    {
        printf("This Array is Overloaded Already ....");

    }
    else
    {
        printf("\nEnter The Position Number, Which position numbers value you wanted to change :- ");
        scanf("%d",&pos);
        printf("\nEnter The Integer Number :- ");
        scanf("%d",&num);
        for(i=b -1; i>= pos-1; i--)
        {
            a[i+1] = a[i];

        }
        a[pos-1]=  num ;
        b++;

        printf("\nNow ,The Value Of Array Elements Are :-  ");

        for(i=0; i<b; i++)
        {
            printf("%d ",a[i]);

        }
        printf("\n");


    }
    return 0 ;
}
