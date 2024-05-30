#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
struct Node *head;
void Insert()
{


}
void print_linked_list(int ar[],int size)
{
    int i;
    struct Node *temp1;
    for(i=0;i<size;i++)
    {
        temp1=( struct Node*) malloc(sizeof( struct Node));
        temp1->data=ar[i];
        temp1->link=NULL;
        if(head==NULL)
        {
           head =temp1;
        }
        else
        {
            struct Node *temp2;
            head=temp2;
            while(temp2->link!=NULL)
            {
                temp2=temp2->link;
            }
          temp2->link = temp1;
        }

    }


}
void print()
{
    struct Node*temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;

    }


void print_array(int arr[],int size)
{
   int i;
   printf("The value of array \n");
    for(i=0;i<size;i++)
{
    printf("%d \t",arr[i]);
}
}


int main()
{
    head=NULL;
    int i,size=0;
    printf("Enter the size of array = \n");
    scanf("%d",&size);

int a[size];
printf("Enter the value of array :- ");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
print_array(a,size);
print_linked_list(a ,size);
print();
return 0;
}
