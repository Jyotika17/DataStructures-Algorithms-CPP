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

int* push(int a[],int item)
{
	if(top==size-1)
	a=createstack(a);
	
	a[++top]=item;
	return a;

}
int pop(int a[])
{
	
	if(top!=-1)
	{	
		int item=a[top];
		top--;
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
		}	
	}
	else
	cout<<"stack is empty\n";
	

}
int main()
{	int* s=createstack(s);
	int c,size,item,value,a,b,res;
	char str[101];
	cout<<"enter the postfix expression:\n";
	cin>>str;
	int l=strlen(str);
	str[l]=')';
	for(int i=0;str[i]!=')';i++)
	{
		if(isalnum(str[i]))
		{
			s=push(s,str[i]-'0');
		}
		else
		{
			char c=str[i];
			switch(c)
			{
				case '+':a=pop(s);
						b=pop(s);
						s=push(s,a+b);
						break;
				case '-': a=pop(s);
						b=pop(s);
						s=push(s,a-b);
						break;
				case '*': a=pop(s);
						b=pop(s);
						s=push(s,a*b);
						break;
				case '/': a=pop(s);
						b=pop(s);
						s=push(s,a/b);
						break;
			}
		}
	}
	int result=pop(s);
	cout<<"the result is:"<<result<<"\n";
	return 0;
}

