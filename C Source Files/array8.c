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
       printf("successfully item added:- %d \n",stack[top]);
    }

    else
    {
        printf("Exception! No spaces \n");
    }


}
int pop()
{
    return -1;
}

int peek()
{
    if(top>=0)
    {

    }

}

int main()
{
    push(2);
    push(4);
    push(6);
    push(8);
    return 0;
}
