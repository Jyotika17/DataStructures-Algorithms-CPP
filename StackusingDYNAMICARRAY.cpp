#include<bits/stdc++.h>
using namespace std;
#define bound 2
int top=-1;
int size=0;
int* createstack(int *a)
{
	int* new_a;
	new_a=new int[size+bound];
	for(int i=0;i<size;i++)
	new_a[i]=a[i];
	size+=bound;
	return new_a;
	
}
/*int isFull(int a[])
{
	if(top==size-1)
	a=createstack(a);
	else return 0;
}*/
/*int isEmpty(int a[])
{
	if(top==-1)
	return 1;
	else return 0;
}*/
int* push(int a[],int item)
{
	if(top==size-1)
	a=createstack(a);
	
	a[++top]=item;
	cout<<"element "<<item<<" pushed\n";
//	cout<<top<<"\n";
	return a;

}
int pop(int a[])
{
	
	if(top!=-1)
	{	
		int item=a[top];
		top--;
		cout<<"Popped element is "<<item<<"\n";
	//	cout<<top<<"\n";
	//	cout<<"Popped\n";
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
void showstack(int a[])
{
	if(top>-1)
	{	int i;
		for(i=top;i>=0;i--)
		{
			cout<<a[i]<<" ";
		//	stack1->top++;
		//	i++;
		}	
	}
	else
	cout<<"stack is empty\n";
	

}
int main()
{
	int c,size,item,value;
//	cout<<"enter the size of stack\n";
//	cin>>size;
//	stack1 *stack1;
//	int s[size];
//	stack1=createstack(size);
	int* s=createstack(s);
	while(1)
	{
		cout<<"\n1.Push\n";
		cout<<"2.Pop\n";
		cout<<"3.Peek\n";
		cout<<"4.Show stack\n";
		cout<<"5.Exit\n";
		cin>>c;
		switch(c)
		{
			case 1: cout<<"enter the item to be pushed:\n";
					cin>>value;
					s=push(s,value);
					break;
			case 2: item=pop(s);
				/*	if(item==-1)
					cout<<"List is empty\n";
					else
					cout<<"popped item is "<<item<<"\n";*/
					break;
			case 3: item=peek(s);
					if(top!=-1)
					cout<<"top of stack= "<<item<<"\n";
					else
					cout<<"stack is empty\n";
					break;
			case 4: showstack(s);
					break;
			case 5: exit(0);
					break;
		}
		
	}
	return 0;
}
