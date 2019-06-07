#include<bits/stdc++.h>
using namespace std;
typedef struct node node;
struct node
{
	int value;
	struct node *next;
};
node *head=NULL;
node* createnode()
{
	node *n;
	n=(node *)malloc(sizeof(node));
	return n;	
}
void insertnode()
{
	node *temp;
	temp=createnode();
	cout<<"enter the value: \n";
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
void deletefromend()
{
	if(head==NULL)
	cout<<"List is empty.\n";
	else if(head->next==NULL)
	{
		node *r;
		r=head;
		head=NULL;
		free(r);
		
	}
	else
	{
		node *t;
		t=head;
		while(t->next->next!=NULL)
		t=t->next;
		node *r;
		r=t->next;
		t->next=NULL;
		free(r);
		
	}

}
void deletefromstart()
{
	if(head==NULL)
	cout<<"List is empty.\n";
	else
	{
		node *r;
		r=head;
		head=head->next;
		free(r);
		
	}
}
void deletebyvalue()
{
	int n;
	cout<<"Enter the value to be deleted: \n(only in ascending order)\n";
	cin>>n;
	if(head==NULL)
	{
		cout<<"List is empty\n";
	}
	else if(head->value==n)
	{
		node *r;
		r=head;
		head=head->next;
		free(r);
	}
	else
	{
		node *t,*r;
		t=head;
		while( t->next->value!=n)
		t=t->next;
		r=t->next;
		t->next=r->next;
		free(r);
	}
	
}
void deletebyindex()
{
	int i;
	cout<<"enter the index whose value is to be deleted: \n";
	cin>>i;
	if(head==NULL)
	cout<<"List is empty\n";
	else if(i==0)
	{
		node *r;
		r=head;
		head=head->next;
		free(r);
	}
	else
	{
		node *t,*r;
		int j=1;
		t=head;
		while(j!=i)
		{
			t=t->next;
			j++;
		}
		r=t->next;
		t->next=r->next;
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
		cout<<"\n1. Insertion at end\n";
		cout<<"2. Deletion from end\n";
		cout<<"3. Deletion from start\n";
		cout<<"4. Deletion by value\n";
		cout<<"5. Deletion by index\n";
		cout<<"6. View List\n";
		cout<<"7. Exit\n";
		cin>>c;
		switch(c)
		{
			case 1: insertnode();
					break;
			case 2: deletefromend();
					break;
			case 3: deletefromstart();
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
