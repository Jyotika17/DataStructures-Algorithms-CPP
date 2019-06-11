#include<bits/stdc++.h>
using namespace std;
int min(int a[],int k, int n)
{
	int i,min=a[k],c=k;
	for(i=k+1;i<=n;i++)
	{
		if(a[i]<=min)
		{
			min=a[i];
			c=i;
			
		}
	}	
	return c;
}
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<n;i++)
	{
		int m=min(a,i,n);
		int temp=a[m];
		a[m]=a[i];
		a[i]=temp;
	}
	for(i=1;i<=n;i++)
	cout<<a[i]<<" ";
	return 0;
}
