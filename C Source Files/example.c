#include<stdio.h>
void test (int t)
{
    int i,n;
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        while(n>1)
        {
            if(n%2==0)
            {

                n=n/2 ;
            }
            else
            {
                n=3*n+1 ;
            }

        }
        if(n==1)
        {

            printf("YES.\n") ;
        }
        else
        {
            printf("NO.\n") ;
        }

    }


}
int main()
{

    int t,n;

    scanf("%d",&t);

    /* while(t-->0){
         scanf("%d",&n);

         while(n>1){
             if(n%2==0){
                  n=n/2;
             }
             else
             n= 3*n+1;
         }

         if(n==1){
             printf("YES\n");
         }else printf("NO\n");
     }*/

    test(t);
    return 0 ;
}
