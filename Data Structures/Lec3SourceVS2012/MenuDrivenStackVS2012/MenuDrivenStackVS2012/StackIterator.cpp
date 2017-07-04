#include "StackIterator.h"

namespace cs20 
{
template <class Object>
StackIterator<Object>::StackIterator() : current( NULL ) 
{
	// all assignments occurred above
}

template <class Object>
StackIterator<Object>::StackIterator( StackNode<Object> *node ) : current( node ) 
{
	// all assignments occurred above
}
template <class Object>
bool StackIterator<Object>::isValid() const
{
	return((current != NULL));
}

template <class Object>
void StackIterator<Object>::advance() 
{
	if (isValid()) {
		current = current->getNext();
	}
}

template <class Object>
const Object& StackIterator<Object>::retrieve() const 
{
	if (!(isValid())) 
		throw BadIterator();

	return( current->getElement() );
}
}
