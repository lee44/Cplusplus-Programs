#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <iostream>
#include <cstdlib>
#include <string>
#include "SortRoutine.h"

using namespace std;

class QuickSort : public SortRoutine {
public:
	QuickSort();

	// each kind of sort will provide an implementation of this method
	virtual void sort( int array[], int size );
	// each kind of sort has an algorithm name
	virtual string name() const;
private:
	void quicksort( int array[], int size );
	void quicksort( int array[], 
					int low, int high );
};

#endif