#ifndef TREE_HPP
#define TREE_HPP
#include"node.hpp"
class Tree{
public :
       int size;
       Node *root;
       Tree();
	   void RandomlyADD(Node*,Node**);
	   void DestroyRoots(Node*);
	   void Destroy();
};
#endif