#include<bits/stdc++.h>
using namespace std;
typedef struct Arrayqueue queue1;
struct Arrayqueue{
	int rear;
	int front;
	int capacity;
	int *array;
};
queue1* createqueue(int size)
{
	queue1* q;
	q=new queue1[sizeof(queue1)];
	q->rear=-1;
	q->front=-1;
	q->capacity=size;
	q->array=new int[sizeof(int)*q->capacity];
	return q;
	
}
int isFull(queue1 *q)
{
	return((q->rear+1)%q->capacity==q->front);
}
int isEmpty(queue1* q)
{
	return(q->front==-1);
}
queue1* enqueue(queue1 *q,int value)
{
	if(isFull(q))
	cout<<"overflow\n";
	else
	{	q->rear=(q->rear+1)%q->capacity;
	//	q->rear++;
		q->array[q->rear]=value;
		if(q->front==-1)
		q->front=q->rear;
		cout<<"element "<<value<<" added\n";
		
	}
	return q;
}
int dequeue(queue1 *q)
{	int item;
	item=q->array[q->front];
	if(isEmpty(q))
	cout<<"queue is empty\n";
	else
	{
		if(q->front==q->rear)
		q->front=q->rear=-1;
		else
		{
			q->front=(q->front+1)%q->capacity;
		}
		cout<<"removed element is "<<item<<"\n";
	}
	return item;
}
int queuesize(queue1 *q)
{
	if(q->front==-1&&q->rear==-1)
	return 0;
	else
	return((q->capacity-q->front+q->rear+1)%q->capacity);	
}
int main()
{	int size,c,value,item,s;
	cout<<"enter the size of queue:\n";
	cin>>size;
	queue1 *q=createqueue(size);
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
					q=enqueue(q,value);
					break;
			case 2: item=dequeue(q);
				/*	if(item==-1)
					cout<<"List is empty\n";
					else
					cout<<"popped item is "<<item<<"\n";*/
					break;
			case 3: s=queuesize(q);
					cout<<s<<"\n";				
					break;
			case 4: exit(0);
					break;
		}
		
	}
}
