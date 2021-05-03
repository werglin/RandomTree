#include"tree.hpp"
Tree::Tree()
{
       this->root=NULL;
	   this->size=0;
}
void Tree::RandomlyADD(Node* newNode,Node** root)
{
	int placeNum=rand()%5+1;
	switch (placeNum)
	{
		case 1:
			root=&((*root)->child1);
			break;
		case 2:
			root=&((*root)->child2);
			break;
		case 3:
			root=&((*root)->child3);
			break;
		case 4:
			root=&((*root)->child4);
			break;
		case 5:
			root=&((*root)->child5);
			break;
	}
	if(*root!=NULL)
	{
		this->RandomlyADD(newNode,root);
	}
	else
	{
		*root=newNode;
	}
}
void Tree::DestroyRoots(Node* root)
{
	if(root->child1!=NULL)
	{
		this->DestroyRoots(root->child1);
		root->child1=NULL;
	}
	if(root->child2!=NULL)
	{
		this->DestroyRoots(root->child2);
		root->child2=NULL;
	}
	if(root->child3!=NULL)
	{
		this->DestroyRoots(root->child3);
		root->child3=NULL;
	}
	if(root->child4!=NULL)
	{
		this->DestroyRoots(root->child4);
		root->child4=NULL;
	}
	if(root->child5!=NULL)
	{
		this->DestroyRoots(root->child5);
		root->child5=NULL;
	}
	root->Destroy();
	this->size--;
}
void Tree::Destroy()
{
	this->DestroyRoots(this->root);
	std::cout<<std::endl<<"DELETED TREE"<<std::endl<<std::endl;
	this->root=NULL;
	delete this;
}
