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
void deletefromend()
{
	if(head==NULL)
	cout<<"list is empty.\n";
	else
	{
		node *t;
		t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		node *r;
		r=t;
		t->prev->next=NULL;
		free(r);
		
	}
}
void deletefrombeg()
{
	if(head==NULL)
	cout<<"list is empty.\n";
	else
	{
		node *r;
		r=head;
		head=head->next;
		head->prev=NULL;
		free(r);
	}
}
void deletebyvalue()
{	int n;
	cout<<"enter the value to be deleted:\n";
	cin>>n;
	if(head==NULL)
	cout<<"list is empty.\n";
	else if(head->value ==n)
	{
		node *r;
		r=head;
		head=head->next;
		free(r);
	}
	else
	{
		node *t;
		t=head;
		while(t->next->value!=n)
		t=t->next;
		node *r;
		r=t->next;
		if(t->next->next==NULL)
		t->next=NULL;
		else
		{
			t->next=t->next->next;
			t->next->prev=t;
		}
	
		free(r);
	}
}
void deletebyindex()
{
	int i;
	cout<<"enter the index whose value is to be deleted\n";
	cin>>i;
	if(head==NULL)
	{
		cout<<"list is empty\n";
	}
	else if(i==0)
	{
		node *r;
		r=head;
		head=head->next;
		free(r);
	}
	else
	{
		node *t;
		int j=0;
		t=head;
		while(j!=i)
		{
			t=t->next;
			j++;
		}
		node *r;
		r=t;
		if(t->next==NULL)
		t->prev->next=NULL;
		else
		{
			t->next->prev=t->prev;
			t->prev->next=t->next;
		}
		free(r);
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
int main()
{
	int c;
	while(1)
	{
		//system("cls");
		cout<<"\n1.Insertion in end\n";
		cout<<"2.Deletion from end\n";
		cout<<"3.Deletion from beg\n";
		cout<<"4.Deletion by value\n";
		cout<<"5.Deletion by index\n";
		cout<<"6.View List\n";
		cout<<"7.Exit\n";
		
		cin>>c;
		switch(c)
		{
			case 1: insertatend();
					break;
			case 2: deletefromend();
					break;
			case 3: deletefrombeg();
					break;	
			case 4: deletebyvalue();
					break;	
			case 5: deletebyindex();
					break;		
			case 6: traverse();
					break;
			case 7: exit(0);
			
		}
	}
}
