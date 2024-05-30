#include<stdio.h>
int binary_search(int a[],int size,int search)
{
    int left, right,mid;
    left = 0 ;
    right = size - 1 ;
    while(left<=right)
    {
        mid = (left + right)/2 ;

        if(search == mid)
        {

            return mid ;
        }
        else if (search > a[mid])
        {
            left = mid + 1 ;

        }
        else
        {
            right = mid -1 ;
        }
    }

    return -1 ;
}
void display(int result)
{

    if(result>=0)
    {
        printf("Item is found...\n");

    }
    else
    {

        printf("Item is not found...\n") ;
    }


}


int main ()
{
    int i, size,search ;
    printf("\nEnter the integer number for array size :- ");
    scanf("%d",&size);
    int a[size] ;
    printf("\nEnter the values for array elements :-  ");

    for(i=0; i<size; i++)
    {

        scanf("%d",&a[i]);

    }
    printf("\nInsert a integer number for searching :- ");
    scanf("%d",&search);
    int result =binary_search(a,size,search) ;

    display(result);

    return 0 ;
}
