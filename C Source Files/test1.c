#include<stdio.h>
int found = 0;
void liner_search(int a[5], int value)
{
    int i ;
    for(i=0; i<5; i++)
    {
        if(a[i]==value)
        {
            printf(" The Value is %d ",a[i]);
            found++ ;
        }

    }

    if(found==0)
    {
        printf("This number is not found\n");
    }

}
    int main()
    {
        int input ;
        int ar[5] = {2,1,3,4,8};
        printf("Enter a integer number,\nWhich number you want to search in the array list :- \n");
        scanf("%d",&input);
        liner_search(ar,input);

        return 0 ;

    }
