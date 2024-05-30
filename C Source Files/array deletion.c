#include <stdio.h>
int main()
{
    int a[10],pos,size,i;
    printf("Enter the size of array :- ");
    scanf("%d",&size);
    printf("\nEnter the value of array elements ;-");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
printf("\nThe value of array all elements are : ");

    for(i=0; i<size; i++)
    {

       printf("%d  ",a[i]);
    }
    printf("\n");

    printf("\nEnter a position number , which element value you wanted to deleted:- ");
    scanf("%d",&pos);

    for(i=pos-1; i<size-1;i++)
    {
        a[i]= a[i+1];

    }
    size-- ;
     for(i=0; i<size; i++)
    {

       printf("%d  ",a[i]);
    }
      printf("\n");
    return 0 ;
}
