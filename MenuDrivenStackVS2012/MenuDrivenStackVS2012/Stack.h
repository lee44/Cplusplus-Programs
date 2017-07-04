#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "StackNode.h"
#include "EmptyStack.h"

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
	bool isPalindrome( ); 
	const Stack& operator =( const Stack& rhs );

private:
	StackNode<Object> * topNode;
	bool p;
	int count;
	int a [10];
	int b [10];
};

}

#endif