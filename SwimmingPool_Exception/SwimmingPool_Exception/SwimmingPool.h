#ifndef SWIMMINGPOOL_H
#define SWIMMINGPOOL_H
#include <iostream>
#include <stdexcept>
using namespace std;

namespace cs52
{
	class SwimmingPool {
	public:
		SwimmingPool();
		SwimmingPool( int size );

		void fill( int amount );
		void splash( );
		void swim( );
		void evaporate( int amount );

		int getSize( );
		int getContents( );
		void setSize( int size );

		friend SwimmingPool operator + (const SwimmingPool& sw1, const SwimmingPool& sw2);
		friend SwimmingPool operator - (const SwimmingPool& sw1, const SwimmingPool& sw2);

		friend bool operator > (const SwimmingPool& sw1, const SwimmingPool& sw2);
		friend bool operator < (const SwimmingPool& sw1, const SwimmingPool& sw2);

		friend bool operator == (const SwimmingPool& sw1, const SwimmingPool& sw2);
		friend bool operator != (const SwimmingPool& sw1, const SwimmingPool& sw2);

		friend ostream& operator << ( ostream& outs, const SwimmingPool & pool );
		friend istream& operator >> ( istream& ins, SwimmingPool & pool );

	private:
		int mySize;		// how big the pool is
		int myContents;	// how full the pool is
	};
}
#endif