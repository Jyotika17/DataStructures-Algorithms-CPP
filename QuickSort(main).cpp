#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int i,int j)
{	
	int x=a[i],p=i,temp,q;
	for(q=i+1;q<=j;q++)
	{
		if(x>=a[q])
		{
			p=p+1;
			temp=a[q];
			a[q]=a[p];
			a[p]=temp;
		}
	}
	temp=a[p];
	a[p]=a[i];
	a[i]=temp;
	
	return p;
}
void quicksort(int a[],int i,int j)
{
	int q;
	if(i<j)
	{
		q=partition(a,i,j);
		quicksort(a,i,q-1);
		quicksort(a,q+1,j);
	}
}
int main()
{
	int n;
	cout<<"enter the no. of elements:\n";
	cin>>n;
	int a[n];
	cout<<"enter the elements:\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	a[n]=999999;
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
