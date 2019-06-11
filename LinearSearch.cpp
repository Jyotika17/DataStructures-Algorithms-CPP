#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,x,k;
	cin>>n;
	int a[n];
	for(i=1;i<=n;i++)
	cin>>a[i];
	cout<<"enter element to be searched: \n";
	cin>>x;
	for(i=1;i<=n;i++)
	{
		if(a[i]==x)
		{
			k=i;
			break;
		}
		
	}
	if(i==n+1)
	cout<<"element not found\n";
	else
	cout<<"element found at index: "<<k-1<<"\n";
	return 0;
}
