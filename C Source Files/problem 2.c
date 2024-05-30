#include <stdio.h>

void main()
{
    int ar1[20], ar2[20];
    int i, n;

    printf("----------------------------------------------------\n");
    printf("\n\nCopy the elements one array into another array :\n");
    printf("----------------------------------------------------\n");

    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);

    printf("Input %d elements in the array :\n",n);
    for(i=0; i<n; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&ar1[i]);
    }

    for(i=0; i<n; i++)
    {
        ar2[i] = ar1[i];
    }


    printf("\nThe elements stored in the first array are :\n");
    for(i=0; i<n; i++)
    {
        printf("%d \t", ar1[i]);
    }


    printf("\n\nThe elements copied into the second array are :\n");
    for(i=0; i<n; i++)
    {
        printf("%d \t", ar2[i]);
    }
    printf("\n\n");
}
