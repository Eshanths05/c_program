#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void insertAtBegin(int data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}
void display()
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }printf("NULL");
}




int main()
{
    int n,data;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&data);
        insertAtBegin(data);

    }
    display();
}