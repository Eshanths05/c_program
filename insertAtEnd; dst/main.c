#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
    char  data[50];
    struct Node *next;
};
struct Node *head=NULL;
void insertAtend( char data[])
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
   // struct Node*temp=head;
    strcpy(newNode->data,data);
    newNode->next=NULL;
    
    if(head==NULL)
    {
        head=newNode;
        return;
    }
   struct Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
    


void display()
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%s->",temp->data);
        temp=temp->next;
    }printf("NULL");
}




int main()
{
    int n;
    char data[50];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",&data);
        insertAtend(data);

    }
    display();
}