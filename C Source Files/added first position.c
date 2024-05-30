#include<stdio.h>
#include<stdlib.h>
struct node
{

    int data ;

    struct node *link ;

};

struct node * head,*temp,*Node ;

void display()
{

    temp = head ;
    while(temp!=0)
    {
        printf("%d-------> ",temp->data);
        temp= temp->link;
    }
    printf("NULL");
}
void added position()
{


}
int main ()
{
    int choice ;
    head = NULL ;
    while (choice)
    {


        Node = (struct node*)malloc(sizeof(struct node)) ;
        printf("\nEnter the value of listed - list :- ");
        scanf("%d",&Node-> data);
        Node->link=NULL ;
        if(head==NULL)
        {
            head = temp = Node ;
        }
        else
        {
            temp->link = Node ;
            temp= Node ;

        }
        printf("\nDo you want to continue [press 0 or 1] :- ");
        scanf("%d",&choice);
    }



    display();





    return 0 ;
}
