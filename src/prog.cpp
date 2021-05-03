#include <ctime>
#include"tree.hpp"
using namespace std;
void WriteRoots(Node* root,string Str)
{
	if(root->child1!=NULL)
	{
		WriteRoots(root->child1,Str+"->child1");
	}
	if(root->child2!=NULL)
	{
		WriteRoots(root->child2,Str+"->child2");
	}
	if(root->child3!=NULL)
	{
		WriteRoots(root->child3,Str+"->child3");
	}
	if(root->child4!=NULL)
	{
		WriteRoots(root->child4,Str+"->child4");
	}
	if(root->child5!=NULL)
	{
		WriteRoots(root->child5,Str+"->child5");
	}
	cout<<endl<<Str+" : NODE "<<root->data<<endl;
}
int main()
{ 
	srand(time(0));
	Tree* t1=new Tree();
	int lenght;
	cout<<"Enter how many node you want to add in random tree:"<<endl;
	cin>>lenght;
	int newNode_data;
	for(int i=0;i<lenght;i++)
	{
		cout<<endl<<"Enter node data:"<<endl;
		cin>>newNode_data;
		Node* newNode=new Node(newNode_data);
		if(i==0)
		{
			t1->root=newNode;
			t1->size++;
		}
		else
		{
			t1->RandomlyADD(newNode,&(t1->root));
		}
	}
	WriteRoots(t1->root,"root");
	t1->Destroy();
	system("pause");
	return 0;
}