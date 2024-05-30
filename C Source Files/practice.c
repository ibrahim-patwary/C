#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *link;

};
struct node *head, *temp,*Node ;
void display ()
{
    struct node  *temp ;
    temp= head ;
    while (temp !=NULL)
    {
        printf("%d -----> ",temp->data);
        temp = temp-> link ;


    }

}

int main ()
{

    int choice ;
    head = NULL ;
    while (choice)
    {

        Node = (struct node *) malloc(sizeof(struct node ));
        printf("\nEnter a integer value :- ");
        scanf("%d",&Node->data);
        Node -> link = NULL ;
        if(head== NULL)
        {
            head = temp = Node ;

        }
        else
        {
            temp -> link = Node;
            temp=Node;

        }
        printf("\nDo you want to CONTINUE [0,1] :-- ");
        scanf("%d",&choice);
    }

    display ();


    return 0 ;
}

