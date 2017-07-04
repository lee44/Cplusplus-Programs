#ifndef QUEUE_CPP
#define QUEUE_CPP

#include "Queue.h"

namespace cs20 {

template <class Object>
Queue<Object>::Queue() {
	frontNode = NULL;
	backNode = NULL;
}

template <class Object>
Queue<Object>::Queue( const Queue<Object>& rhs ) {
	frontNode = NULL;
	backNode = NULL;
	*this = rhs;
}

template <class Object>
Queue<Object>::~Queue() {
	makeEmpty();
	// when empty, frontNode and backNode will already be null
}

template <class Object>
bool Queue<Object>::isEmpty() const {
	return( (frontNode == NULL) );
}

template <class Object>
void Queue<Object>::makeEmpty() {
	while (!isEmpty()) {
		dequeue();
	}
}

template <class Object>
void Queue<Object>::enqueue( const Object& data ) {
	QueueNode<Object>* newNode = new QueueNode<Object>( data );
	if (isEmpty()) {
		frontNode = newNode;
		backNode = newNode;
	}
	else {
		backNode->setNext( newNode );
		backNode = backNode->getNext();
	}
}

template <class Object>
const Object Queue<Object>::dequeue() {
	Object frontData = getFront();

	QueueNode<Object> * oldFront = frontNode;
	frontNode = frontNode->getNext();
	delete oldFront;
	return( frontData );
}

template <class Object>
const Object& Queue<Object>::getFront() const {
	if (isEmpty()) {
		throw EmptyQueue();
	}
	return( frontNode->getElement() );
}

// Deep copy of linked Queue
template <class Object>
const Queue<Object>& Queue<Object>::operator =( const Queue<Object>& rhs ) {
	if (this != &rhs) {
		makeEmpty();
		QueueNode<Object> * rhsFrontNode = rhs.frontNode;
		while( rhsFrontNode != NULL) {
			enqueue( rhsFrontNode->getElement() );
			rhsFrontNode = rhsFrontNode->getNext();
		}
	}
	return( *this );
}

template <class Object>
std::ostream& Queue<Object>::printQueue( std::ostream& outs ) {
	if (isEmpty()) {
		outs << "Empty Queue";
	}
	else {
		QueueNode<Object> * node = frontNode;
		while( node != NULL) {
			outs << node->getElement();
			outs << " ";
			node = node->getNext();
		}
	}
	return( outs );
}
	
}
#endif