#include<bits/stdc++.h>
using namespace std;
typedef struct node node;
struct node{
	node *prev;
	int value;
	node *next;
};
node *head=NULL;
node* createnode()
{
	node *n;
	n=(node*)malloc(sizeof(node));
	return n;
}
void insertatend()
{
	node *temp;
	temp=createnode();
	cout<<"enter the value:\n";
	cin>>temp->value;
	temp->prev=NULL;
	temp->next=NULL;
	if (head==NULL)
	head=temp;
	else
	{
		node *t;
		t=head;
		while(t->next!=NULL)
		t=t->next;
	//	t->next->next=temp;
		t->next=temp;
		temp->prev=t;
	}
	
}
void traverse()
{
	if(head==NULL)
	cout<<"List is empty.\n";
	else
	{
		node *t;
		t=head;
		while(t!=NULL)
		{
			cout<<t->value<<" ";
			t=t->next;
		}
	}
}
void insertatbeg()
{
	node *temp;
	temp=createnode();
	cout<<"Enter the value:\n";
	cin>>temp->value;
	temp->prev=NULL;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{
		temp->next=head;
		head=temp;
	}
}
void insertbyvalue()
{
	node *temp;
	temp=createnode();
	cout<<"enter the value:\n(ascending order)\n";
	cin>>temp->value;
	temp->prev=NULL;
	temp->next=NULL;
	if (head==NULL||head->value>temp->value)
	{	
		temp->next=head;
		head=temp;
	}
	else
	{
		node *t;
		t=head;
		while(t->next!=NULL&&t->next->value<=temp->value)
		t=t->next;
		temp->next=t->next;
		temp->prev=t;
		t->next=temp;
		t->next->prev=temp;
		
	}
}
void insertbyindex()
{
	node *temp;
	int i;
	temp=createnode();
	cout<<"enter the value and index at which it is to be inserted:\n";
	cin>>temp->value>>i;
	temp->prev=NULL;
	temp->next=NULL;
	if (head==NULL||i==0)
	{
		temp->next=head;
		head=temp;
	}
	else
	{
		node *t;
		int j=1;
		t=head;
		while(j!=i)
		{
			t=t->next;
			j++;
		}
		temp->next=t->next;
		temp->prev=t;
		t->next=temp;
		t->next->prev=temp;
	}
}
void reverse()
{
	node *t,*temp;
	temp=NULL;
	t=head;
	while(t!=NULL)
	{
		temp=t->prev;
		t->prev=t->next;
		t->next=temp;
		t=t->prev;
	}
	if(temp!=NULL) //to check for empty list or no node
	head=temp->prev;
	cout<<"Reversed\n";
}
int main()
{
	int c;
	while(1)
	{
	
		cout<<"\n1.Insertion in end\n";
		cout<<"2.Insertion at beg\n";
		cout<<"3.Insertion by value\n";
		cout<<"4.Insertion by index\n";
		cout<<"5.View List\n";
		cout<<"6.Reverse\n";
		cout<<"7.Exit\n";
		cin>>c;
		switch(c)
		{
			case 1: insertatend();
					break;
			case 2: insertatbeg();
					break;
			case 3: insertbyvalue();
					break;	
			case 4: insertbyindex();
					break;	
			case 5: traverse();
					break;
			case 6: reverse();
					break;
			case 7: exit(0);
			
		}
	}
}
