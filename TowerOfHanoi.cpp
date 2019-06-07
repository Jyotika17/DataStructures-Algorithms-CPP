#include<bits/stdc++.h>
using namespace std;
void TowerOfHanoi(int n, char beg,char aux, char end);
int main()
{
	int n;
	char A,B,C;
	cin>>n;
	TowerOfHanoi(n,'A','B','C');
	return 0;
}
void TowerOfHanoi(int n, char beg,char aux, char end)
{
	if (n>=1)
	{
		TowerOfHanoi(n-1,beg,end,aux);
		cout<<"Move disk "<<n<<" from "<<beg<<" to "<<end<<"\n";
		TowerOfHanoi(n-1,aux,beg,end);
	}
}
