#include<bits/stdc++.h>
using namespace std;
typedef struct graph1 graph;
struct graph1{
	int v,e;
	int **adj;
};
int main()
{	int v,e,i,j,u,w;
	graph* g;
	g=new graph[sizeof(graph)];
	cout<<"enter the number of vertices and edges:\n";
	cin>>v>>e;
	g->v=v;
	g->e=e;
	g->adj=new int*[sizeof(int)*(g->v)];
	for(i=0;i<g->v;i++)
	{	g->adj[i]=new int[sizeof(int)*(g->v)];
		for(j=0;j<g->v;j++)
		{
		//	*(*(g->adj+i)+j)=0;
		g->adj[i][j]=0;
		}
	}
	cout<<"enter the edges in form of node numbers:\n";
	for(i=0;i<g->e;i++)
	{
		cin>>u>>w;
		if(u<0||w>g->v||w<0||u>g->v)
		cout<<"invalid edge\n";
		else
		{
			g->adj[u-1][w-1]=1;
			g->adj[w-1][u-1]=1;
		}
		

	}
	cout<<"the adjacency matrix is as follows\n";
	for(i=0;i<g->v;i++)
	{
		for(j=0;j<g->v;j++)
		{
			cout<<g->adj[i][j]<<" ";
		}
		cout<<"\n";
	}
}
