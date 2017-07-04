#ifndef BINARYTREE_H
#define BINARYTREE_H
#pragma warning( disable:4290 )
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
	void merge( const Object& rootElement,BinaryTree& firstChild,BinaryTree& nextSibling );
	void setRightSide( BinaryTree& theRightSide );
	void setLeftSide( BinaryTree& theLeftSide );
	
	const BinaryTree& operator =( const BinaryTree& rhs );

	// this is tremendously bad form but I had to do it
	// to support the menu-based program
	BinaryTreeNode<Object> * getRoot() const;

	void printTree( std::ostream& out ) const;

	bool isOnRightSide( Object value ) throw (InvalidTreeArgument);
	Object BinaryTree<Object>::findMin() throw (InvalidTreeArgument);
	
private:
	typedef BinaryTreeNode<Object>* NodePtr;
	bool found;
	bool objectExists;
	int min;
	NodePtr root;
	int v;
	void makeEmpty( NodePtr &t );
	friend class BinaryTreeIterator<Object>;

	void printTree( NodePtr subtree, std::ostream & out ) const;
	void inOrder(NodePtr root) ;
	void preOrder(NodePtr subtree) ;
};

}
#endif