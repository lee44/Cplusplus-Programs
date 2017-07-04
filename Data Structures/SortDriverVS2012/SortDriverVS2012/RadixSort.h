#ifndef RADIXSORT_H
#define RADIXSORT_H
#include <iostream>
#include <cstdlib>
#include <string>
#include "SortRoutine.h"
 
using namespace std;

class RadixSort : public SortRoutine
{
public:
	RadixSort();
	virtual void sort( int array[], int size);
	virtual string name() const;
private:
	int getRadix();
	int findExponent(int array[], int size);
	void radixS( int array[], int size, int radix, int exponent );
	int radix,exponent;
	
};
#endif
