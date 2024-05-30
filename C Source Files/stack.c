#include<stdio.h>
#define CAPACITY 3

int stack[CAPACITY] ;
int top=-1;
void push(int a)
{
    if(top< CAPACITY- 1)
    {
       top=top +1;
       stack[top]=a;
       printf("successfully item added:- %d \n",a);
    }

    else
    {
        printf("Exception! No spaces \n");
    }


}
int pop()
{
    if(top>=0)
    {
        int val=stack[top];
        top=top -1;
        return val;
    }
    printf("Exception from pop! Empty stack \n");
    return -1;
}

int peek()
{
    if(top>=0)
    {
     return  stack[top];
    }
    printf("Exception from peek! Empty stack.\n");
}

int main()
{
    peek();
    push(2);
    push(4);
    push(6);
    printf("Top of stack :- %d\n",peek());
    printf("pop item :- %d\n",pop());
    push(8);
    printf("Top of stack :- %d\n",peek());
    return 0;
}
