#ifndef PREORDERITERATOR_H
#define PREORDERITERATOR_H
#include <iostream>
#include "Tree.h"
#include "TreeIterator.h"
#include "Stack.h"

namespace cs20 {

template <class Object>
class PreOrderIterator : public TreeIterator<Object> {
public:
	PreOrderIterator( const Tree<Object>& theTree );
	virtual ~PreOrderIterator();

	void advance();
	void first();
	
protected:
	Stack<const TreeNode<Object> *> q;
};

}

#endif