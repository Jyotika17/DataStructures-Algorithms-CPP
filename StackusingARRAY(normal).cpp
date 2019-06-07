#include<bits/stdc++.h>
using namespace std;
int top=-1;
int isFull(int a[],int size)
{
	if(top==size-1)
	return 1;
	else return 0;
}
int isEmpty(int a[])
{
	if(top==-1)
	return 1;
	else return 0;
}
void push(int a[],int item,int size)
{
	if(!isFull(a,size))
	{
		top++;
		a[top]=item;
		cout<<"element "<<item<<" pushed\n";
	}
	else
	cout<<"stack is full\n";
}
int pop(int a[])
{
//	cout<<top<<"\n";
	if(!isEmpty(a))
	{	
		int item=a[top];
		top--;
		cout<<"Popped element is "<<item<<"\n";
		return item;
	}
	else
	cout<<"stack is empty\n";
}
int peek(int a[])
{
	int item=a[top];
	return item;
}

int main()
{
	int c,size,item,value;
	cout<<"enter the size of stack\n";
	cin>>size;
	int s[size];
	while(1)
	{
		cout<<"\n1.Push\n";
		cout<<"2.Pop\n";
		cout<<"3.Peek\n";
		cout<<"4.Exit\n";
		cin>>c;
		switch(c)
		{
			case 1: cout<<"enter the item to be pushed:\n";
					cin>>value;
					push(s,value,size);
					break;
			case 2: item=pop(s);
				/*	if(item==-1)
					cout<<"List is empty\n";
					else
					cout<<"popped item is "<<item<<"\n";*/
					break;
			case 3: item=peek(s);
					if(!isEmpty(s))
					cout<<"top of stack= "<<item<<"\n";
					else
					cout<<"stack is empty\n";
					break;
			case 4: exit(0);
					break;
		}
		
	}
	return 0;
}
