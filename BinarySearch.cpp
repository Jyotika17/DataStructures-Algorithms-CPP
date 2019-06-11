#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l=1,u,mid,x,i,n,k;
	cout<<"enter the no. of elements\n";
	cin>>n;
	u=n;
	int a[n];
	cout<<"enter the elements(in sorted order)\n";
	for(i=1;i<=n;i++)
	cin>>a[i];
	cout<<"enter the element to be searched\n";
	cin>>x;
	while(l<=u)
	{
		mid=(l+u)/2;
		if(a[mid]==x)
		{
			k=mid;
			break;
		}
		else if(a[mid]>x)
		u=mid-1;
		else
		l=mid+1;
		
	}
	if(l>u)
	cout<<"element not found\n";
	else
	cout<<"element found at index "<<k-1<<"\n";
	return 0;
}
