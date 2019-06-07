#include<bits/stdc++.h>
using namespace std;
#define bound 4
int top=-1;
int size=0;
int* createstack(int *s)
{
	int *new_s;
	new_s=new int[size +bound];
	for(int i=0;i<size;i++)
	new_s[i]=s[i];
	size+=bound;
	return new_s;
}
int* push(int a[],int value)
{
	if(top==size-1)
	int *a=createstack(a);
	
	a[++top]=value;
	return a;
}
char pop(int a[])
{	if(top==-1);
	else
	{
		char item=a[top];
		top--;
		return item;
	}	

}
int prec(char c)
{
	if(c=='^')
	return 3;
	else if(c=='*'||c=='/')
	return 2;
	else if(c=='+'||c=='-')
	return 1;
	else
	return -1; 
}
int main()
{
	char str[101];
	string os;
	char c;
	int c1=0;
	cout<<"enter valid infix expression:\n";
	cin>>str;
	int* s=createstack(s);
	int l=strlen(str);
	
	for(int i=0;i<l;i++)
	{	
	
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
		{
		
			os+=str[i];	
		}

		else if(str[i]=='(')
		{
			s=push(s,str[i]);

		}
		else if(str[i]==')')
		{
			while(s[top]!=-1&&s[top]!='(')
			{	char cc=s[top];
				c=pop(s);
			
				os+=cc;
			}
			if(s[top] == '(') 
            { 
                char c2 = s[top]; 
                char c3=pop(s); 
            }

		}
		else
		{
			while(top!=-1&&prec(str[i])<=prec(s[top]))
			{	char cc=s[top];
				c1=pop(s);
				os+=cc;
			}
			s=push(s,str[i]);
		
		}
		
		
	}

	while(top!=-1)
	{	char c4=s[top];
		c=pop(s);
		os+=c4;

	}
	cout<<"postfix: "<<os<<"\n";
	return 0;
}
