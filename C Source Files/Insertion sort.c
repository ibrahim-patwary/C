#include<stdio.h>

void Insertion_sort(int a[],int size)
{
    int temp, i, j ;

    for(i=1; i<size; i++)
    {
        temp=a[i];
        j=i-1;

        while(j>=0 && a[j]>temp)
        {

            a[j+1] =a[j];
            j--;
        }

        a[j+1] = temp ;
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

    int i, size ;
    printf("\nEnter the integer number for array size :- ");
    scanf("%d",&size);
    int a[size] ;
    printf("\nEnter the values for array elements :-  ");

    for(i=0; i<size; i++)
    {

        scanf("%d",&a[i]);

    }

    Insertion_sort(a,size)   ;
    return 0 ;
}
