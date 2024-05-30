#include<stdio.h>

void selection_sort(int a[],int size)
{
    int temp,i, j;
    for(i=0; i<size-1; i++)
    {
        int min ;
        min = i ;
        for(j=i+1; j<size; j++)
        {
            if(a[j]<a[min])
            {
                min= j ;
            }

        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]= temp;
        }
    }
    print(a,size) ;
}

void print(int a[],int size)
{
    int i ;
    for(i=0; i<size; i++)
    {

        printf("%d\t",a[i]);
    }


}

int main()
{

    int i, size;
    printf("\nEnter the integer number for array size :- ");
    scanf("%d",&size);
    int a[size] ;
    printf("\nEnter the values for array elements :-  ");

    for(i=0; i<size; i++)
    {

        scanf("%d",&a[i]);

    }
    selection_sort(a,size);
    return 0 ;
}
