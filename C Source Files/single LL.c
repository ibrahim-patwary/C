#include<stdio.h>
#include<stdlib.h>
int main ()
{
    struct node
    {
        int data;
        struct node *next ;

    };
    struct node *head, *temp,*newNode;
    int choice ;

    while(choice)
    {
        head = NULL ;
        newNode = (struct node*)malloc (sizeof(struct node));
        printf("\nEnter the value of Singly linked - list :- ");
        scanf("%d",&newNode -> data);
        newNode-> next = NULL ;
        if(head == NULL)
        {

            head = temp = newNode ;
        }
        else
        {
            temp -> next = newNode ;
            temp = newNode ;
        }
        printf("\nDo you want to continue [ press 0 or 1 ]:- ");
        scanf("%d",&choice);

    }
    struct node *temp1;
    temp1 = head ;
    while(temp1 !=NULL)
    {

        printf("%d----> ", temp1-> data);
        temp1= temp1 -> next ;
    }
    printf("NULL");
    return 0 ;
}
