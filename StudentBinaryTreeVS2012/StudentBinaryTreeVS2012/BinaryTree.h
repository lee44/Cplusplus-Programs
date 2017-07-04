#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
#include <cstddef>
#include "BinaryTreeNode.h"
#include "InvalidTreeArgument.h"

namespace cs20 {

template <class Object>
class BinaryTreeIterator;

template <class Object>
class BinaryTree {
public:
	BinaryTree();
	BinaryTree( const Object& rootElement );
	BinaryTree( const BinaryTree& rhs );
	~BinaryTree();

	bool isEmpty() const;
	void makeEmpty();
	int size() const;
	int height() const;
	void merge( const Object& rootElement,	BinaryTree& firstChild,	BinaryTree& nextSibling );
	void setRightSide( BinaryTree& theRightSide );
	void setLeftSide( BinaryTree& theLeftSide );
	
	const BinaryTree& operator =( const BinaryTree& rhs );

	bool cluster( Object o ) ;

	// this is tremendously bad form but I had to do it
	// to support the menu-based program
	BinaryTreeNode<Object> * getRoot() const;

	void printTree( std::ostream& out ) const;
private:
	typedef BinaryTreeNode<Object>* NodePtr;
	
	NodePtr root;
	void makeEmpty( NodePtr &t );
	friend class BinaryTreeIterator<Object>;

	void preOrder(NodePtr subtree,Object o);

	void printTree( NodePtr subtree, std::ostream & out ) const;
	bool c;
};

}
#endif