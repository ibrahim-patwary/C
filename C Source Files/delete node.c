#include<stdio.h>>
#include<stdlib.h>
struct Node
{
int data;
struct Node *link;
};

struct Node*head;

void insert(int value)
{
   struct Node *temp;
   temp=(struct Node*) malloc(sizeof(struct Node));
   temp->data=value;
   temp->link=NULL;
   if(head==NULL)
   {
       head=temp;
   }
   else
    {
    struct Node *temp1;
    temp1=head;
    while(temp1->link!=NULL)
    {
        temp1=temp1->link;
    }
    temp1->link=temp;
    }
}

void print()
{
   struct Node *temp;
   temp=head;
   while(temp!=NULL)
   {
       printf("%d ->",temp->data);
       temp=temp->link;
   }
   printf("NULL");
   printf("\n");
}

void delete_node(int pos)
{
    if(pos==1)
    {
       struct Node *temp;
       temp=head;
       head=head->link ;
       free(temp);
    }
    else
    {
      struct Node *temp;
      temp=head;
      for(int i=1; i<=pos-2;i++)
      {
          temp=temp->link;
      }
      struct Node *temp2;
      temp2=temp->link;
      temp->link=temp2->link;
      free(temp2);
    }
}

int main()
{
    head=NULL;
    int q,x,y,z,num;
    printf("Insert four values for display :- ");
    scanf("%d %d %d %d",&q,&x,&y,&z);
    printf("Which node you want to delete enter this number :-");
    scanf("%d",&num);
    insert(q);
    insert(x);
    insert(y);
    insert(z);
    print();
    delete_node(num);
    print();


    return 0;
}
