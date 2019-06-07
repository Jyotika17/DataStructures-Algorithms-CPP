#include<bits/stdc++.h>
using namespace std;
typedef struct node node;
struct node{
	int value;
	struct node *next;
};
node *last=NULL;
node* createnode()
{
	node* n;
	n=(node *)malloc(sizeof(node));
	return n;
}
void insertatbeg()
{
	node *temp;
	temp=createnode();
	temp->next=NULL;
	cout<<"enter the value:\n";
	cin>>temp->value;
	if(last==NULL)
	{
		last=temp;
		temp->next=last;
	}
	else
	{
		temp->next=last->next;	
		last->next=temp;
		
	}	
}
void insertatend()
{
	node *temp;
	temp=createnode();
	temp->next=NULL;
	cout<<"enter the value:\n";
	cin>>temp->value;
	if(last==NULL)
	{
		last=temp;
		temp->next=last;
		
	}
	else
	{
		temp->next=last->next;
		last->next=temp;
		last=temp;
	}
}
void insertbyvalue()
{
	node *temp;
	temp=createnode();
	temp->next=NULL;
	cout<<"enter the value:\n (in ascending order)\n";
	cin>>temp->value;
	if(last==NULL)
	{
		last=temp;
		temp->next=last;
		
	}
	else if(last->next->value>temp->value)
	{
		temp->next=last->next;
		last->next=temp;
	}
	else
	{
		node *t;
		t=last->next;
		while(t->next->value<temp->value && t->next!=last->next )
		{
			t=t->next;
		}
		temp->next=t->next;
		t->next=temp;
		if(t->next==last->next)
		last=temp;
	}
}
void insertbyindex()
{
	node *temp;
	int i;
	temp=createnode();
	temp->next=NULL;
	cout<<"enter the value and index at which value is to be inserted\n";
	cin>>temp->value>>i;
	if(last==NULL)
	{
		last=temp;
		temp->next=last;
		
	}
	else if(i==0)
	{
		temp->next=last->next;
		last->next=temp;
	}
	else
	{
		node *t;
		int j=0;
		t=last->next;
		while(j!=i )
		{
			t=t->next;
			j++;
		}
		temp->next=t->next;
		t->next=temp;
		if(t->next==last->next)
		last=temp;
	}
}

void reverse(node *t)
{
	if(last==NULL)
	cout<<"List is empty\n";
	else if(t->next==t)
	cout<<t->value<<" ";
	else
	{
		reverse(t->next);
		cout<<t->value<<" ";
	}
}
void traverse()
{ 
	node *t;       
	t=last->next;
	if(last==NULL)
	cout<<"List is empty\n";
	  	
	else
	
	{
		do
		{
			cout<<t->value<<" ";
			t=t->next;
		}while(t!=last->next);
	}

	
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
	//	cout<<"6.Reverse\n";
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
			case 6: reverse(last->next);
					break;
			case 7: exit(0);
			
		}
	}
}
 
