#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node*next;
}*head=NULL;
void append(int data)
{
	struct Node *newNode=malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;

if(head==NULL)
{
	head=newNode;
}
else
{
	struct Node *temp;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newNode;
}
}
void display()
{
	struct Node*temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main()
{
	int n,data;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&data);
	}
	append(data);
	display();
}

