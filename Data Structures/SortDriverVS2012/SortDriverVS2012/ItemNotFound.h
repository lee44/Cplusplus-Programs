#ifndef ITEMNOTFOUND_H
#define ITEMNOTFOUND_H
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class ItemNotFound : public logic_error {
public:
	ItemNotFound( const string& msg = "" );
};


#endif