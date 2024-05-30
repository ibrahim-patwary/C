#include<stdio.h>
void linear_search(int a[], int size, int search)
{
    int i,found=0;
    for (i=0; i<size; i++)
    {
        if(a[i]==search)
        {
            printf("\nNumber is Found... \n");
            found ++ ;
            break;

        }

    }
    if(found==0)
    {
        printf("\nNumber is not Found... \n");

    }


}


int main ()
{
    int i, size,search ;
    printf("\nEnter the integer number for array size :- ");
    scanf("%d",&size);
    printf("\nInsert a integer number for searching :- ");
    scanf("%d",&search);
    int a[size] ;
    printf("\nEnter the values for array elements :-  ");

    for(i=0; i<size; i++)
    {

        scanf("%d",&a[i]);

    }
    linear_search(a,size,search);
    return 0 ;
}
