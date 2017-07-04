#ifndef BST_CPP
#define BST_CPP

#include "BST.h"

namespace cs20 {

template <class Object>
BST<Object>::BST() {
	root = NULL;
	num= NULL;
}

template <class Object>
BST<Object>::BST( const BST<Object>& rhs ) {
	num= NULL;
	root = NULL;
	*this = rhs;
}

template <class Object>
BST<Object>::BST( const Object& rootElement ) {
	num= NULL;
	root = new BSTNode<Object>( rootElement );
}

template <class Object>
BST<Object>::~BST() {
	makeEmpty();
}

template <class Object>
bool BST<Object>::isEmpty() const {
	return( root == NULL );
}

template <class Object>
void BST<Object>::makeEmpty() {
	makeEmpty( root );
}

template <class Object>
void BST<Object>::makeEmpty( NodePtr & node ) {
	if (node != NULL) {
		NodePtr l = node->getLeftSide();
		NodePtr r = node->getRightSide();
		makeEmpty( l );
		makeEmpty( r );
		delete node;
		node = NULL;
	}
}

template <class Object>
int BST<Object>::size() const {
	return( BSTNode<Object>::size( root ) );
}

template <class Object>
int BST<Object>::height() const {
	return( BSTNode<Object>::height( root ) );
}

template <class Object>
const Object& BST<Object>::findMin() const throw(InvalidTreeArgument) {
	if (root == NULL)
		throw InvalidTreeArgument();
	return( findMin( root ) );
}

template <class Object>
const Object& BST<Object>::findMax() const throw(InvalidTreeArgument) {
	if (root == NULL)
		throw InvalidTreeArgument();
	return( findMax( root ) );
}

template <class Object>
const Object& BST<Object>::findMin( NodePtr node ) const {
	while( node->getLeftSide() != NULL ) {
		node = node->getLeftSide();
	}
	return( node->getElement() );
}

template <class Object>
const Object& BST<Object>::findMax( NodePtr node ) const {
	while( node->getRightSide() != NULL ) {
		node = node->getRightSide();
	}
	return( node->getElement() );
}

template <class Object>
const Object& BST<Object>::find( const Object& x ) const throw (InvalidTreeArgument) {
	return( find( x, root ) );
}

template <class Object>
const Object& BST<Object>::find( const Object& x, NodePtr node ) const throw (InvalidTreeArgument) {
	if (node == NULL)
		throw InvalidTreeArgument();
	if (node->getElement() < x) {
		return( find( x, node->getLeftSide() ) );
	}
	if (node->getElement() > x) {
		return( find( x, node->getRightSide() ) );
	}
	return( node->getElement() );
}

template <class Object>
void BST<Object>::insert( const Object& x ) throw (InvalidTreeArgument) {
	insert( x, root );
}

template <class Object>
void BST<Object>::insert( const Object& x, NodePtr& node ) throw (InvalidTreeArgument) {
	if (node == NULL) {
		node = new BSTNode<Object>( x, NULL, NULL );
	}
	else if (x < node->element) {
		insert( x, node->leftSide );
	}
	else if (x > node->element) {
		insert( x, node->rightSide );
	}
	else
		throw InvalidTreeArgument();
}

template <class Object>
void BST<Object>::removeMin() throw (InvalidTreeArgument) {
	removeMin( root );
}

template <class Object>
void BST<Object>::removeMin( NodePtr& node ) throw (InvalidTreeArgument) {
	if (node == NULL) {
		throw InvalidTreeArgument();
	}
	else if (node->leftSide != NULL) {
		removeMin( node->leftSide );
	}
	else {
		NodePtr temp = node;
		node = node->rightSide;
		delete temp;
	}
}

template <class Object>
void BST<Object>::remove( const Object& x ) throw (InvalidTreeArgument) {
	remove( x, root ); 
}

template <class Object>
void BST<Object>::remove( const Object& x, NodePtr & node ) throw (InvalidTreeArgument) {
	if (node == NULL)
		throw InvalidTreeArgument();
	else if (x < node->element) 
		remove( x, node->leftSide );
	else if (x > node->element)
		remove( x, node->rightSide );
	// on the matching node
	else if (node->leftSide != NULL && node->rightSide != NULL) {
		// 2 children
		node->element = findMin( node->rightSide );
		removeMin( node->rightSide );
	}
	else {
		// one or no children
		NodePtr temp = node;
		if (node->leftSide != NULL) {
			node = node->leftSide;
		}
		else {
			node = node->rightSide;
		}
		delete temp;
	}
}

// Deep copy of tree
template <class Object>
const BST<Object>& BST<Object>::operator =( const BST<Object>& rhs ) {
	if (this != &rhs) {
		makeEmpty();
		if (rhs.root != NULL) 
			root = rhs.root->duplicate();
	}
	return( *this );
}
	
template <class Object>
std::ostream& BST<Object>::printBST( std::ostream& outs ) const {
	if (isEmpty()) 
		outs << "Empty BST";
	else
		root->printBSTNode( outs );
	outs << endl;
	return( outs );
}

template <class Object>
BSTNode<Object>* BST<Object>::getRoot() const {
	return( root );
}
template <class Object>
Object BST<Object>::closestValue( Object value ) 
{
	v=value;

	if(root==NULL)
		throw InvalidTreeArgument();

	preOrder(root,num);
	 
	return num;
}
template <class Object>
void BST<Object>::preOrder(NodePtr subtree,Object a) 
{
	if(subtree==NULL)
		return;

	if(a==NULL)
		a=subtree->getElement();

	if(std::abs(subtree->getElement()-v) < std::abs(v-a))
	{
		a=subtree->getElement();
		num=a;
	}
	
	preOrder(subtree->getLeftSide(),a);
	preOrder(subtree->getRightSide(),a);
	
}
}
#endif