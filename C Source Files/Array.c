#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *p)
{
    while(hade!=NULL)
    {

        printf("%d->",hade->data);
        hade=hade->next;
    }

}
int main()
{
    struct Node *hade= NULL;
    struct Node *a= NULL;
    struct Node *b= NULL;
    struct Node *c= NULL;
    a=(struct Node*)malloc(sizeof(struct Node));
    b=(struct Node*)malloc(sizeof(struct Node));
    c=(struct Node*)malloc(sizeof(struct Node));
    a->data=5;
    b->data=10;
    c->data=70;
    hade->next=a;
    a->next=b;
    b->next=c;
    c->next=NULL;


    if(a->data>b->data&&a->data>c->data)
    {
        printf("The largest number= %d\n",a->data);
    }
    else if(c->data>b->data&&a->data<c->data)
    {
        printf("The largest number= %d\n",c->data);
    }
    else
    {
        printf("The largest number =%d\n",b->data);
    }


display(hade);


    return 0;
}
