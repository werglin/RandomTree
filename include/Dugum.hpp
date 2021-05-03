#ifndef DUGUM_HPP
#define DUGUM_HPP
#include <iostream>
class Dugum{
	public:	
		int data;
		Dugum *child1;
		Dugum *child2;
		Dugum *child3;
		Dugum *child4;
		Dugum *child5;
		Dugum(int);
		void Destroy();
};
#endif