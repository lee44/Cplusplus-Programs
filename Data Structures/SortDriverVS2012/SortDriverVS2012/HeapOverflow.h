#ifndef HEAPOVERFLOW_H
#define HEAPOVERFLOW_H
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class HeapOverflow : public logic_error {
public:
	HeapOverflow( const string& msg = "" );
};


#endif