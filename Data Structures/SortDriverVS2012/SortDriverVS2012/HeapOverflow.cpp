#include <iostream>
#include <string>
#include "HeapOverflow.h"

using namespace std;

HeapOverflow::HeapOverflow( const string& msg ) : logic_error( msg.c_str() ) {}


