#ifndef BINARYHEAP_H
#define BINARYHEAP_H
#include <iostream>
#include <vector>

using namespace std;

typedef int Position;

template <class Object>
class BinaryHeap {
public:
	BinaryHeap( int initialSize = 100 );
	BinaryHeap( const vector<Object> &v );
	BinaryHeap( const Object data[], int dataSize );
	BinaryHeap( const BinaryHeap& rhs );
	~BinaryHeap();

	bool isEmpty() const;
	void makeEmpty();
	int  occupied() const;

	const Object& findMin() const;

	Position insert( const Object& data );
	void decreaseValue( const Position p, const Object& data );
	void merge( BinaryHeap& bh );
	void deleteMin();
	Object deleteMinAndReturn();

	const BinaryHeap& operator =( const BinaryHeap& rhs );
// take this out for the student version
	friend ostream& operator << ( ostream& outs, const BinaryHeap& b );
	friend ostream& operator << ( ostream& outs, const BinaryHeap* b );
	ostream& insertion( ostream& outs ) const;

	int getExchanges() const;
	int getComparisons() const;
private:
	typedef Object* ObjectPtr;
	
	ObjectPtr array;
	int       cellsOccupied;
	int		  size;

	void   buildHeap();
	void   percolateDown( int index );
	int    parentIndex( int index ) const;
	Object parentValue( int index ) const;

	int exchanges;
	int comparisons;
};
#endif