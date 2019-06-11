#include<bits/stdc++.h>
using namespace std;
void insertionsort(int a[],int n)
{
	int temp,i,j;
	for(i=2;i<=n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=1;j--)
		{
			if(a[j]>temp)
			{
				a[j+1]=a[j];
				
			}
			else
			break;
		}
		a[j+1]=temp;
	}

}
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=1;i<=n;i++)
	cin>>a[i];
	insertionsort(a,n);
	for(i=1;i<=n;i++)
	cout<<a[i]<<" ";
	return 0;
}
