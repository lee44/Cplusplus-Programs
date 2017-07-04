#include <iostream>
#include <string>
#include "BadArgument.h"

using namespace std;

BadArgument::BadArgument( const string& msg ) : logic_error( msg.c_str() ) {}


