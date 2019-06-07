/*#include<bits/stdc++.h>
using namespace std;
int rear=-1;
int front=-1;
int capacity=0;
void insert(int a[],int value)
{
	if(front==(rear+1)%capacity)
	cout<<"overflow\n";
	else if(front==-1)
	{
		a[++rear]=value;
		front=rear;
		cout<<"element "<<value<<" added\n";
	}
	else
	{
		rear=(rear+1)%capacity;
		a[rear]=value;
		cout<<"element "<<value<<" added\n";
	}
}
int delete1(int a[]) 
{	int value=a[front];
	if(front==-1)
	cout<<"underflow\n";
	else
	{
		if(rear==front)
		rear=front=-1;
		else
		front=(front+1)%capacity;
		cout<<"element "<<value<<" popped\n";
	}

	return value;
}
int queuesize(int a[])
{
	if(front==-1&&rear==-1)
	return 0;
	else if(front==(rear+1)%capacity)
	return capacity;
	else
	return((capacity-front+rear+1)%capacity);
}
int main()
{

	cout<<"enter the size of queue:\n";
	cin>>capacity;
	int a[capacity],s,c,value,item;
	while(1)
	{
		cout<<"\n1.Enqueue\n";
		cout<<"2.Dequeue\n";
		cout<<"3.Queue size\n";
		cout<<"4.Exit\n";
		cin>>c;
		switch(c)
		{
			case 1: cout<<"enter the item to be pushed:\n";
					cin>>value;
					insert(a,value);
					break;
			case 2: item=delete1(a);
					break;
			case 3: s=queuesize(a);
					cout<<s<<"\n";				
					break;
			case 4: exit(0);
					break;
		}
	}
		
}
#include <stdio.h>
int main()
{
    printf("%c ", "GeeksQuiz"[5]);
    return 0;
}
*/
#include <stdio.h>
#include <stdarg.h>
int fun(int n, ...)
{
    int i, j = 1, val = 0;
    va_list p;
    va_start(p, n);
    for (; j < n; ++j)
    {
        i = va_arg(p, int);
        val += i;
    }
    va_end(p);
    return val;
}
int main()
{
    printf("%d\n", fun(4, 1, 2, 3));
    return 0;
}

