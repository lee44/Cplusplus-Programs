#ifndef PREORDERITERATOR_CPP
#define PREORDERITERATOR_CPP

#include "PreOrderIterator.h"

namespace cs20 {

template <class Object>
PreOrderIterator<Object>::PreOrderIterator( const BinaryTree<Object> & theTree ) : BinaryTreeIterator<Object>( theTree ) {
	s.push(root);
}

template <class Object>
PreOrderIterator<Object>::~PreOrderIterator() {

}

template <class Object>
void PreOrderIterator<Object>::first( ) 
{
	s.makeEmpty();
	if (root != NULL) 
	{
		s.push( root );
		advance();
	}
}


template <class Object>
void PreOrderIterator<Object>::advance( ) 
{
	if (s.isEmpty()) 
	{
		if (current == NULL) 
			throw BadIterator();
		current = NULL;
	}
	else 
	{
		current = s.topAndPop();
	
		if (current->getRightSide() != NULL) 
			s.push( current->getRightSide() );
		if (current->getLeftSide() != NULL)
			s.push( current->getLeftSide() );
		
		
	}
}

}

#endif