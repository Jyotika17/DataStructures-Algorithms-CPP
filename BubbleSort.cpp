#include<bits/stdc++.h>
using namespace std;
#define max 10001
void bubblesort(int a[],int n)
{	
	int i,j,flag=0;
	for(i=1;i<=n;i++)
	{	flag=0;
		for(j=1;j<=n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				flag=1;
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			
			}
		}
		
		if(flag==0)
		{	
			cout<<"Rounds="<<i<<"\n";
			return;                              //optimised
		}
		
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	bubblesort(a,n);
	for(int i=1;i<=n;i++)
	cout<<a[i]<<" ";
	return 0;
}
