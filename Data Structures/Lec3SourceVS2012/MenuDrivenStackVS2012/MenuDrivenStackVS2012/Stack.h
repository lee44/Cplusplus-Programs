#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "StackNode.h"
#include "EmptyStack.h"
#include "StackIterator.h"

namespace cs20 {

template <class Object>
class Stack {
public:
	Stack();
	Stack( const Stack& rhs );
	~Stack();

	bool isEmpty() const;
	void makeEmpty();
	void push( const Object& data );
	void pop();
	const Object& top() const;
	Object topAndPop();
	std::ostream& printStack( std::ostream& outs ) const;
	
	const Stack& operator =( const Stack& rhs );
	bool Stack<Object>::isConsecutive( const Object & data ) const;

	StackIterator<Object> first();

private:
	StackNode<Object> * topNode;
};

}

#endif