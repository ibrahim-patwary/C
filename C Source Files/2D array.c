#include <stdio.h>
int main()
{
    int a[3][4], i,j;

    printf("Enter the value of 2D array[3*4] :- ");
    for(i=0; i<3; i++)
    {
        for(j=0; j< 4; j++)
        {
            scanf("%d",&a[i][j]);

        }

    }
    printf("\nThe Array :-\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j< 4; j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
    return 0 ;
}
