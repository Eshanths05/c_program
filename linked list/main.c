#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}
struct node*head=NULL;

void add_at_begin()
{
	struct node* nn=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&nn->data);
	if(head==NULL) {
		head=nn;
	}
	else {
		nn->next=head;
		head=nn;
	}
}
void add_at_end()
{
	struct nide*nn=(struct nod*)malloc(sizeof(struct node));
	scanf("%d",&nn->data);
	nn->next=null;
	if(head==NULL);
	{
		head=nn;
	}
	else
	{
		struct node*temp=head;
		while(temp->next!=null)
		{
			temp=temp->next;
		}
		temp->next=nn;
	}
}
void add_at_any_pos(int p)
{
	if(p<1) {
		printf("Invalid position\n");
		return;
	}
	if(p==1) {
		add_at_begin();
		return;
	}
	int i=0;
	while(i<p-1 && temp!=NULL)
	{
		temp=temp->next;
	}
	if(tamp==NULL) {
		printf("Invalid position");
	}
	else
	{
		nn->next=temp->next;
		temp->next=nn;
	}
}
void add_at_begin_mid()
{
	int mid=
}
int count() {
	struct node*temp=head;
	int c=0;
	int i=0;
	while(temp->next!=NULL) {
		c++;
		temp=temp->next;
	}
}
void add_at_mind() {
	int mid=(count()/2)+1;
	add_at_any_pos(mid);
	;
	return;
}
int count()
{
	struct node*temp=head;
	int c=0;
	int i=0;
	while(temp->next!=NULL) {
		c++;
		temp=temp=>next;
	}
	return c;
}
void delete_at_begin() {
	struct node* temp=head;
	if(head==null) {
		printf("List ie empty");
	} else if(head->next==NULL) {
		head=NULL;
	}
	else
	{
		head=head->next;
		free(temp);
	}
}
void delete_at_end() {
	struct node*temp,*prev;
	if(head==null) {
		printf("List ie empty\n");
	} else if(head->next==NULL) {
		head=NULL;
	} else {
		temp=head;
		while(temp=temp->next) {
			ptev=temp;
			temp=temp->next;
		}
		prev->next=NULL;
		free(temp);

	}
	void delete_at_any_pos(int p)
	{
		struct node*temp,prev;
		if(p<1)
		{
			printf("Invalid input\n");
		}
		if(p==1)
		{
			delete_at_begin();
		}
		temp=head;
		int i=0;
		while(i<pos-1 && temp!=null)
		{
			temp=temp->next;
		}
		if(temp=NULL)
		{
			printf("Invalid position");
		}
		else
		{
			pre->next=temp->next;
			free(temp);

		}
	}
	void delete_at_mid()
	{
		int mid=(count()/2)+1;
		add_at_any_pos(mid);
		return;
	}




	int main()
	{
		printf("Hello World");

		return 0;
	}