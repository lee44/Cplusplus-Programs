#ifndef STACKITERATOR_H
#define STACKITERATOR_H

#include "StackNode.h"
#include "BadIterator.h"

namespace cs20 
{
template <class Object>
class Stack;					 

template <class Object>
class StackIterator
{
public:
	StackIterator();
	bool isValid() const; 
	void advance(); 
	const Object& retrieve() const;
private:
	StackIterator( StackNode<Object> *node );
	StackNode<Object> * current;
};

}
#endif