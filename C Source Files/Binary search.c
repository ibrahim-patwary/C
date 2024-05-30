#include<stdio.h>

int binary_search(int a[],int n,int searchItem)
{
    int m ;
  int  L=0 ;
  int R=n-1;
    while(L<= R)
    {
      m=(L+R)/2 ;
      if(a[m]<searchItem)
      {
          L=m+1;
      }
     else if(a[m]>searchItem )
       {
           R=m-1;
       }
       else
       {
           return m ;
       }

    }
   return -1 ;

}


int main ()
{
   int searchItem ,size,i,result;
    printf("\nEnter the array size :- ");
    scanf("%d",&size);
    int a[size];
    printf("\nEnter the elements of array :-  ");
    for(i=0;i<size;i++)
    {

        scanf("%d",&a[i]);

    }
    printf("\nEnter the value of Search Item :- ");
    scanf("%d",&searchItem);
  result= binary_search(a,size,searchItem);
    if(result==-1)
    {
        printf("Item not found..\n ");
    }
    else
    {
        printf("Item found ...\n");
    }


    return 0 ;
}
