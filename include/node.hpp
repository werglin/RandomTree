#ifndef NODE_HPP
#define NODE_HPP
#include<iostream>
class Node{
	public:	
		int data;
		Node *child1;
		Node *child2;
		Node *child3;
		Node *child4;
		Node *child5;
		Node (int);
		void Destroy();
};
#endif