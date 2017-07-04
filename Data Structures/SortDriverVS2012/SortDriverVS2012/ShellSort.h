#ifndef SHELLSORT_H
#define SHELLSORT_H
#include <iostream>
#include <cstdlib>
#include <string>
#include "SortRoutine.h"

using namespace std;

class ShellSort : public SortRoutine {
public:
	ShellSort();

	// each kind of sort will provide an implementation of this method
	virtual void sort( int array[], int size );
	// each kind of sort has an algorithm name
	virtual string name() const;
private:
	void shell( int array[], int size );
};

#endif