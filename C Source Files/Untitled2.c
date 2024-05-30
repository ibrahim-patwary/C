#include <stdio.h> #include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void print_linked_list()
{
    struct node*temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
int main()
{

    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one =(struct node*) malloc(sizeof(struct node));
    two = (struct node*)malloc(sizeof(struct node));
    three =(struct node*) malloc(sizeof(struct node));

    one->data = 1;
    two->data = 2;
    three->data = 3;



    head = one;

    one->next = two;
    two->next = three;
    three->next = one;
    print_linked_list();
}
