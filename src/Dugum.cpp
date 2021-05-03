#include <iostream>
#include"dugum.hpp"
Dugum::Dugum(int data)
{
	this->data=data;
	this->child1=NULL;
	this->child2=NULL;
	this->child3=NULL;
	this->child4=NULL;
	this->child5=NULL;
}
void Dugum::Destroy()
{
	std::cout<<std::endl<<"DELETED NODE "<<this->data<<std::endl;
	delete this;
}