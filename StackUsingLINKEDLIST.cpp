#include<bits/stdc++.h>
using namespace std;
typedef struct node node;
struct node{
	int value;
	struct node *next;
}; 
node *start=NULL;
node *top=NULL;
node *createnode()
{
	node *n;	
	n= new node[sizeof(node)];
	return n;
}
void push()
{
	node *t;
	int value;
	t=createnode();
	t->next=NULL;
	cout<<"enter the value:\n";
	cin>>value;
	t->value=value;
	if(top==NULL)
	{
			top=t;
			start=t;
	}
	else
	{
		node *temp;
		temp=top;
		while(temp->next!=NULL)
		temp=temp->next;
		temp->next=t;
		top=t;
	}
	//return top;
}
int pop()
{	int item;
	if(top==NULL)
	cout<<"stack is empty\n";
	else
	{
		node *r,*t;
		
		item=top->value;
		t=start;
		if(t->next==NULL)
		{
			r=top;
			top=NULL;
			start=NULL;
			free(r);
		}
		else
		{
			r=top;
			while(t->next->next!=NULL)
			t=t->next;
			t->next=NULL;
			top=t;
			free(r);
		}
		cout<<"Popped value is "<<item<<"\n";
	}
		return item;
}
void showstack()
{
	node *t;
	
	if(top!=NULL)
	{
		t=start;
		while(t!=NULL)
		{
			cout<<t->value<<" ";
			t=t->next;
		}
	}
	else
	cout<<"stack is empty\n";

}
int main()
{
	int c,size,item,value;
	node *s;
//	int* s=createstack(s);
	while(1)
	{
		cout<<"\n1.Push\n";
		cout<<"2.Pop\n";
//		cout<<"3.Peek\n";
		cout<<"3.Show stack\n";
		cout<<"4.Exit\n";
		cin>>c;
		switch(c)
		{
			case 1: //cout<<"enter the item to be pushed:\n";
					//cin>>value;
					push();
					break;
			case 2: item=pop();
				/*	if(item==-1)
					cout<<"List is empty\n";
					else
					cout<<"popped item is "<<item<<"\n";*/
					break;
		/*	case 3: item=peek(s);
					if(top!=NULL)
					cout<<"top of stack= "<<item<<"\n";
					else
					cout<<"stack is empty\n";
					break;*/
			case 3: showstack();
					break;
			case 4: exit(0);
					break;
		}
		
	}
	return 0;
}
