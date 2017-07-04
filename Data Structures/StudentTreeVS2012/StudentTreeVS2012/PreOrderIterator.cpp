#ifndef PREORDERITERATOR_CPP
#define PREORDERITERATOR_CPP

#include <iostream>
#include <cstddef>
#include "TreeIterator.h"
#include "PreOrderIterator.h"
#include "Stack.h"

namespace cs20 
{

template <class Object>
PreOrderIterator<Object>::PreOrderIterator( const Tree<Object> & theTree ) : TreeIterator<Object>( theTree ) {
	q.push( root );
}

template <class Object>
PreOrderIterator<Object>::~PreOrderIterator() {

}

template <class Object>
void PreOrderIterator<Object>::first( ) 
{
	q.makeEmpty();
	if (root != NULL) 
	{
		q.push( root );
		advance();
	}
}


template <class Object>
void PreOrderIterator<Object>::advance( ) 
{
	if (q.isEmpty()) 
	{
		if (current == NULL) 
			throw BadIterator();
		current = NULL;
	}
	else 
	{
		current=q.top();
		q.pop();
		
		if (current->getNextSibling() != NULL)
			q.push( current->getNextSibling() );
		if (current->getFirstChild() != NULL)
			q.push( current->getFirstChild());
			
		
	}
}

}

#endif