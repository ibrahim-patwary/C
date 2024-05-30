#include<stdio.h>
#include<stdlib.h>
struct Node
{

    int id;
    char name[40];
    struct Node*link;

};
struct Node*head;

void insert(char*name,int id)
{
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    strcpy(temp->name,name) ;
    temp->id=id;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        struct Node*temp1;
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
    struct Node*temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("Name :- %s \n",temp->name);
        printf("ID:- %d \n",temp->id);
        temp=temp->link;
    }
    printf("\n \n");

}
void delete_Node(int pos)
{
    if(pos==1)
    {
        struct Node*temp;
        temp=head;
        head=head->link;
        free(temp);
    }
    else
    {
        struct Node *temp1;
        temp1=head;
        for(int i=1; i<=pos-2; i++)
        {
            temp1=temp1->link;
        }
        struct Node *temp2;
        temp2=temp1->link;
        temp1->link=temp2->link;
    }


}
void call_Node()
{
    int num;
    printf("Which node you want to delete enter this number :-");
    scanf("%d",&num);
    delete_Node(num);
}
int main()
{

    head=NULL;
    struct input
    {
      char nam [20];
      int id;
    }s1,s2,s3,s4;
    printf("Enter four students name :-");
    printf("Enter four students name :-");


    insert("Ibrahim patwary",3802);
    insert("Lopa",3803);
    insert("Borsha ",3804);
    insert("Tonni ",3805);
    print();
    call_Node();
    print();
    call_Node();
    print();

    return 0;
}
