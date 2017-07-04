#include <iostream>
#include "Stack.h"
#include "EmptyStack.h"
#include "StackNode.h"
#include "Stack.cpp"
#include "StackNode.cpp"

using namespace std;
using namespace cs20;

int main()
{
	Stack<int> s1;
	Stack<int> s2;
	 
	s1.push( 1 );
	s1.push( 2 );
	s1.push( 3 );
	s1.push( 4 );

	cout<<s1.isConsecutive(2)<<endl;
}