#include<stdio.h>>
int main ()
{
    //......................1D Array..........................
    printf("\n.............1D Array...........");
    int a[5]= {0,2,3,4,5},i;
    int *p;
    p= a;
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",&p);
    p++;

    printf("%d\n",p);
    printf("%p\n",a);
    printf("%d\n",&p);
    printf("%d\n",&a);
    p--;
    printf("%d\n",a+1);
    printf("%d\n",*a+1);
    printf("%d\n",*(a+1));
    printf("%d\n",*(p+1));
    printf("%d\n",3[a]);
    printf("%d\n",*a);
    printf("%d\n",*p);
    printf("%d\n",&a+1);
    printf("%d\n",&1[a]);
    printf("%d\n",&4[a]);

      //......................2D Array..........................
printf("\n................... 2D Array................");
int b[3][3]= {{6,2,5},{0,1,3},{4,4,8}};
int *q;
q= &b[0][0];
//q=a[0];
printf("%d\n",q);
printf("%p\n",b);
printf("%p\n",*b);
printf("%p\n",b[0]);
printf("%p\n",&b[0][0]);
printf("%p",&b);




    return 0 ;
}
