#ifndef PREORDERITERATOR_H
#define PREORDERITERATOR_H
#include <iostream>
#include <cstddef>
#include "BinaryTree.h"
#include "BinaryTreeIterator.h"
#include "Stack.h"

namespace cs20 {

template <class Object>
class PreOrderIterator : public BinaryTreeIterator<Object> {
public:
	PreOrderIterator( const BinaryTree<Object>& theTree );
	virtual ~PreOrderIterator();

	void advance();
	void first();
	
protected:
	 Stack<const BinaryTreeNode<Object> *> s;
};

}
#endif