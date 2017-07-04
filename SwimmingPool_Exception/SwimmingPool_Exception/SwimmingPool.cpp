#include "SwimmingPool.h"
#include <iostream>
#include <stdexcept>

#include "OverflowingSwimmingPoolException.h"
#include "UnderflowingSwimmingPoolException.h"

using namespace std;

namespace cs52
{
	SwimmingPool::SwimmingPool() : mySize(0), myContents(0)
	{}

	SwimmingPool::SwimmingPool( int size ) : mySize(size), myContents(0)
	{}

	void SwimmingPool::fill( int amount ) 
	{
		if((myContents + amount) > mySize)
		{
			throw OverflowingSwimmingPoolException();
			return;
		}

		myContents += amount;
	}

	void SwimmingPool::splash( ) {
		cout << "some splashing in this pool..." << endl;
	}

	void SwimmingPool::swim( ) {
		cout << "some swimming in this pool..." << endl;
	}

	void SwimmingPool::evaporate( int amount ) 
	{
		if((myContents - amount) < 0)
		{
			throw UnderflowingSwimmingPoolException();
			return;
		}

		myContents -= amount;
	}

	int SwimmingPool::getSize( ) {
		return( mySize );
	}

	int SwimmingPool::getContents( ) {
		return( myContents );  
	}

	void SwimmingPool::setSize( int size ) {
		mySize = size;
	}

	SwimmingPool operator + (const SwimmingPool& sw1, const SwimmingPool& sw2)
	{
		SwimmingPool sw(sw1.mySize + sw2.mySize);
		sw.myContents = sw1.myContents + sw2.myContents;

		return sw;
	}

	SwimmingPool operator - (const SwimmingPool& sw1, const SwimmingPool& sw2)
	{
		if (( sw1.myContents - sw2.myContents) > (sw1.mySize - sw2.mySize))
		{
			throw UnderflowingSwimmingPoolException();
			return sw1;
		}

		if((sw1.myContents - sw2.myContents) < 0)
		{
			cout << "*** Error --> Contents cannot be negative." << endl;
			return sw1;
		}

		if((sw1.mySize - sw2.mySize) < 0)
		{
			cout << "*** Error --> Size cannot be negative." << endl;
			return sw1;
		}

		SwimmingPool sw(sw1.mySize - sw2.mySize);
		sw.myContents = sw1.myContents - sw2.myContents;

		return sw;
	}

	bool operator > (const SwimmingPool& sw1, const SwimmingPool& sw2)
	{
		return sw1.mySize > sw2.mySize;
	}

	bool operator < (const SwimmingPool& sw1, const SwimmingPool& sw2)
	{
		return sw1.mySize < sw2.mySize;
	}


	bool operator == (const SwimmingPool& sw1, const SwimmingPool& sw2)
	{
		return sw1.mySize == sw2.mySize;
	}

	bool operator != (const SwimmingPool& sw1, const SwimmingPool& sw2)
	{
		return sw1.mySize != sw2.mySize;
	}

	ostream& operator << ( ostream& outs, const SwimmingPool & pool )
	{
		outs << "Size = " << pool.mySize << "  Contents = " << pool.myContents << endl;
		return outs;
	}

	istream& operator >> ( istream& ins, SwimmingPool & pool )
	{
		int size, contents;

		ins >> size >> contents;

		if(contents > size)
		{
			throw OverflowingSwimmingPoolException();
			return ins;
		}

		if(contents < 0)
		{
			throw UnderflowingSwimmingPoolException();
			return ins;
		}

		if(size < 0)
		{
			throw UnderflowingSwimmingPoolException();
			return ins;
		}

		pool.mySize = size;
		pool.myContents = contents;

		return ins;
	}
}