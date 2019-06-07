#include<bits/stdc++.h>
using namespace std;
typedef struct node node;
struct node{
	int n;
	struct node *next;
};

node* createnode()
{
	node *n;
	n=(node*)malloc(sizeof(node));
	return n;
}
node *start=NULL;
void insertnode()
{	node *temp;
	temp=createnode();
	cout<<"enter the value: ";
	cin>>temp->n;
	temp->next=NULL;
	if(start==NULL)
	start=temp;
	else
	{
		node *t;
		t=start;
		while(t->next!=NULL)
			t=t->next;
		t->next=temp;
	//	temp->link=null;
		
	}
}
void deletenode()
{
	if(start==NULL)
	cout<<"list is empty\n";
	else
	{
		node *r;
		r=start;
		start=start->next;
		free(r);
	}
}
void traverse()
{
	if(start==NULL)
	cout<<"list is empty\n";
	else
	{
		node *t;
		t=start;
		while(t!=NULL)
		{
			cout<<t->n<<" ";
			t=t->next;
		}
	}
}
int main()
{
	int c;
	while(1)
	{
		cout<<"\n1. Insert a node\n";
		cout<<"2. Delete a node\n";
		cout<<"3. View List\n";
		cout<<"4. Exit\n";
		cin>>c;
		
		switch(c)
		{
			case 1: insertnode();
					break;
			case 2: deletenode();
					break;				
			case 3: traverse();
					break;	
			case 4: exit(0);
		}
	}
					
}

