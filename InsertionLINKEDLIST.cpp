#include<bits/stdc++.h>
using namespace std;
typedef struct node node;
struct node 
{
	int value;
	struct node *next;
};
node *head=NULL;
node *createnode()
{
	node *n;
	n=(node *)malloc(sizeof(node));
	return n;
	
}
void insertatend()
{
	node *temp;
	temp=createnode();
	cout<<"enter the value: ";
	cin>>temp->value;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{
		node *t;
		t=head;
		while(t->next!=NULL)
		t=t->next;
		t->next=temp;
	}
	
}
void insertatfirst()
{
	node* temp;
	temp=createnode();
	cout<<"enter the value: ";
	cin>>temp->value;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{
	//	node *r;
	//	r=head;
		
		temp->next=head;
		head=temp;
	}
//	free(r);
}
void insertbyvalue()
{
	node *temp;
	temp=createnode();
	cout<<"enter the value \n (in ascending order): \n";
	cin>>temp->value;
	temp->next=NULL;
	if(head==NULL||head->value>=temp->value)
	{
		temp->next=head;
		head=temp;
	
	}
	else
	{
		node *t;
		t=head;
		while(t->next!=NULL&&t->next->value<temp->value)
		t=t->next;
		temp->next=t->next;
		t->next=temp;
	}
}
void insertbyindex()
{
	node *temp;
	int i;
	temp=createnode();
	cout<<"enter the value and index \n";
	cin>>temp->value>>i;
	temp->next=NULL;
	if(head==NULL||i==0)
	{
		temp->next=head;
		head=temp;
	}
	else
	{
		int j=1;
		node *t;
		t=head;
		while(j!=i)
		{
			t=t->next;
			j++;
		}
		temp->next=t->next;
		t->next=temp;
	}
	
	
}
void traverse()
{
	if(head==NULL)
	cout<<"list is empty\n";
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

int main()
{
	int c;
	while(1)
	{
			
		cout<<"\n1. Insertion at the end\n";
		cout<<"2. Insertion at the beginning\n";
		cout<<"3. Insertion by value\n";
		cout<<"4. Insertion by index\n";
		cout<<"5. View List\n";
		cout<<"6. Exit\n";
		cin>>c;
		switch(c)
		{
			case 1: insertatend();
					break;
			case 2: insertatfirst();
					break;
			case 3: insertbyvalue();
					break;
			case 4: insertbyindex();
					break;
			case 5: traverse();
					break;
			case 6: exit(0);
					
		}
	}
	return 0;
}





