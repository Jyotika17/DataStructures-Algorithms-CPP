#include<bits/stdc++.h>
using namespace std;
typedef struct treenode tnode;
struct treenode
{
	struct treenode* left;
	int info;
	struct treenode* right;
};
tnode* root=NULL;
tnode* createnode(int value)
{	
	tnode *temp;
	temp=new tnode[sizeof(tnode)];
	temp->info=value;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
tnode* insertnode(tnode *p,tnode* t)
{
	
	if(!root)
	{
		root=t;
		p=t;
	}

	else 
	if(!p->left)
	{
		p->left=t;
	}
	else
	{
		p->right=t;
		p=p->left;
	}
	return p;
}
void levelorder(tnode* root)
{
	std::queue<tnode*> q; 
 
	if(!root)
	return;
	q.push(root); 
	while(!q.empty()){
		tnode* temp=q.front();
		q.pop();
		cout<<temp->info<<" ";
		if(temp->left)
		q.push(temp->left);
		if(temp->right)
		q.push(temp->right);
	}	
	//q.delete();
}
void preorder(tnode* root)
{
	if(!root)
	return;
	else
	{
		cout<<root->info<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(tnode* root)
{
	if(!root)
	return;
	else
	{
	
		postorder(root->left);
		postorder(root->right);
		cout<<root->info<<" ";
	}
}
void inorder(tnode* root)
{
	if(!root)
	return;
	else
	{
	
		inorder(root->left);
		cout<<root->info<<" ";
		inorder(root->right);

	}
}
int main()
{
	int n,i,c;
	tnode *t,*p;
	cout<<"enter the number of nodes:\n";
	cin>>n;
	p=root;
	for(i=0;i<n;i++)
	{	
		int v;
		cout<<"enter value "<<i+1<<" \n";
		cin>>v;
		t=createnode(v);
		p=insertnode(p,t);
	}

	cout<<"insertion successful\n";
	while(1)
	{
		cout<<"\n1. LevelOrder\n";
		cout<<"2. PreOrder\n";
		cout<<"3. PostOrder\n";
		cout<<"4. InOrder\n";
		cout<<"5. Exit\n";
		cin>>c;
		switch(c)
		{
			case 1:	levelorder(root);
					break;
			case 2:	preorder(root);
					break;
			case 3:	postorder(root);
					break;
			case 4:	inorder(root);
					break;
			case 5:	exit(0);
					break;
		}
	}

	return 0;
}
