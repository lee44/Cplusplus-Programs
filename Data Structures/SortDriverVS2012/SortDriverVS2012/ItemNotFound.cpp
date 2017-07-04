#include <iostream>
#include <string>
#include "ItemNotFound.h"

using namespace std;

ItemNotFound::ItemNotFound( const string& msg ) : logic_error( msg.c_str() ) {}


