#include <iostream>
#include <ctime>
#include"Lst.hpp"
using namespace std;
void WriteRoots(Dugum* root,string Str)
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
	Lst* l1=new Lst();
	int lenght;
	cout<<"Enter how many node you want to add in random tree:"<<endl;
	cin>>lenght;
	int eleman;
	for(int i=0;i<lenght;i++)
	{
		cout<<endl<<"Enter node data:"<<endl;
		cin>>eleman;
		Dugum* newNode=new Dugum(eleman);
		if(i==0)
		{
			l1->root=newNode;
			l1->size++;
		}
		else
		{
			l1->RandomlyADD(newNode,&(l1->root));
		}
	}
	WriteRoots(l1->root,"root");
	l1->Destroy();
	return 0;
}