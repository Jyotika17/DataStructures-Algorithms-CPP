#include<bits/stdc++.h>
using namespace std;
typedef struct ArrayStack stack1;
struct ArrayStack{
	int top;
	int capacity;
	int *array;
};
stack1 *createstack(int size)
{
	stack1 *s;
//	s=(stack1*)malloc(sizeof(stack1));                       in C
	s= new stack1[sizeof(stack1)];                         //in C++
	s->top=-1;
	s->capacity=size;
//	s->array=(int *)malloc(sizeof(int)*s->capacity);         in C
	s->array= new int[sizeof(int)*s->capacity];            //in C++

	return s;
}
int isEmpty(stack1 *stack1)
{
	if(stack1->top==-1)
	return 1;
	else return 0;
}
int isFull(stack1 *stack1)
{
	if(stack1->top==stack1->capacity-1)
	return 1;
	else return 0;
}
void push(stack1 *stack1,int item)
{
	if(!isFull(stack1))
	{
		stack1->top++;
		stack1->array[stack1->top]=item;
		cout<<"element "<<item<<" pushed\n";
	}
	else 
	cout<<"stack is full\n";
}
int pop(stack1 *stack1)
{
	if(!isEmpty(stack1))
	{
		int item=stack1->array[stack1->top];
		stack1->top--;
		cout<<"popped item is "<<item<<"\n";
		return item;
	}
	else
	cout<<"stack is empty\n";
	
}
void showstack(stack1 *stack1)
{
	if(stack1->top>-1)
	{	int i;
		for(i=stack1->top;i>=0;i--)
		{
			cout<<stack1->array[i]<<" ";
		//	stack1->top++;
		//	i++;
		}	
	}
	else
	cout<<"stack is empty\n";
	

}
int main()
{	int c,size,item,value;
	cout<<"enter the size of stack\n";
	cin>>size;
	stack1 *stack1;
	stack1=createstack(size);
	while(1)
	{
		cout<<"\n1.Push\n";
		cout<<"2.Pop\n";
		cout<<"3.Show stack\n";
		cout<<"4.Exit\n";
		cin>>c;
		switch(c)
		{
			case 1: cout<<"enter the item to be pushed:\n";
					cin>>value;
					push(stack1,value);
					break;
			case 2: item=pop(stack1);
				/*	if(item==-1)
					cout<<"List is empty\n";
					else
					cout<<"popped item is "<<item<<"\n";*/
					break;
			case 3: showstack(stack1);
					break;
			case 4: exit(0);
					break;
		}
		
	}
	return 0;
}
