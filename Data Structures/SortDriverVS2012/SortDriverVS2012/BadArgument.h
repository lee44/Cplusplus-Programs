#ifndef BADARGUMENT_H
#define BADARGUMENT_H
#include <iostream>
#include <string>

using namespace std;

class BadArgument : public logic_error {
public:
	BadArgument( const string& msg = "" );
};


#endif