#include <iostream>
using namespace std;
#include "SwimmingPool.h"

#include "OverflowingSwimmingPoolException.h"
#include "UnderflowingSwimmingPoolException.h"

void main( ) {
	using namespace cs52;   // big change...

SwimmingPool smallOne( 1 );
SwimmingPool bigOne( 1000 );
bigOne.fill( 100 );

SwimmingPool yours( 10 );
yours.fill( 1 );
SwimmingPool mine( 20 );
mine.fill( 19 );


cout << "--some tests follow--"<< endl;
SwimmingPool pool1 = mine + mine;
SwimmingPool pool2 = yours - yours;

try {
  SwimmingPool badPool = smallOne - bigOne;
  cout << "This should never happen..." << endl;
} catch( UnderflowingSwimmingPoolException uspe ) {
  cout << "working..." << endl;
} catch( OverflowingSwimmingPoolException uspe ) {
  cout << "This should never happen..." << endl;
}

try {
  smallOne.evaporate( 10000 );
  cout << "This should never happen..." << endl;
} catch( UnderflowingSwimmingPoolException uspe ) {
  cout << "working..." << endl;
} catch( OverflowingSwimmingPoolException uspe ) {
  cout << "This should never happen..." << endl;
}

try {
  smallOne.fill( 10000 );
  cout << "This should never happen..." << endl;
} catch( UnderflowingSwimmingPoolException uspe ) {
  cout << "This should never happen..." << endl;
} catch( OverflowingSwimmingPoolException uspe ) {
  cout << "working..." << endl;
}

	system("pause");
}