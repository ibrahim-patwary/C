#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data ;
    struct Node *link;
};

struct Node *head;


void print_linked_list()
{
     struct Node*temp;
     temp=head;
     while(temp!=NULL)
     {
         printf("%d ->",temp->data);
         temp=temp->link;
     }
     printf("NULL");
}

void insert(int value)
{
    struct Node *temp;
    temp=( struct Node*) malloc (sizeof( struct Node));
    temp->data=value;
    temp->link=head;
    head=temp;
}


int main()
{
    head=NULL;
    int x,y,z;
    printf("Inserts the three values for linked list :-");
    scanf("%d %d %d",&x,&y,&z);
    insert(x);
    insert(y);
    insert(z);
    print_linked_list();

    return 0;
}
