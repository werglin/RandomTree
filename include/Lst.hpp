#ifndef LST_HPP
#define LST_HPP
#include<iostream>
#include"dugum.hpp"
class Lst{
public :
       int size;
       Dugum *root;
       Lst();
	   void RandomlyADD(Dugum*,Dugum**);
	   void DestroyRoots(Dugum*);
	   void Destroy();
};
#endif