#include <iostream>
#include "Queue.h"
#include "EmptyQueue.h"
#include "QueueNode.h"
#include "Queue.cpp"
#include "QueueNode.cpp"

using namespace std;
using namespace cs20;

int main()
{
	Queue<int> q1;
	Queue<int> q2;
	 
	q1.enqueue( 1 );
	q1.enqueue( 2 );
	q1.enqueue( 3 );
	q1.enqueue( 4 );
	
	cout<<q1.isDecreasing()<<endl;

}