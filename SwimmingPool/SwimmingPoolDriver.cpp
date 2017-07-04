#include <iostream>
#include "SwimmingPool.h"
#include "UnderflowingSwimmingPoolException.cpp"
#include "OverflowingSwimmingPoolException.cpp"

int main( ) {

   using namespace std;
   using namespace cs52;

SwimmingPool smallOne( 1 );

SwimmingPool bigOne( 1000 );
bigOne.fill( 100 );
SwimmingPool yours( 10 );
yours.fill( 1 );
SwimmingPool mine( 20 );
mine.fill( 19 );
/*

cout << "--some tests follow--"<< endl;
SwimmingPool pool1 = mine + mine;
SwimmingPool pool2 = yours - yours;
if (pool1 > pool2) {
cout << "> is working..." << endl;
}
if (pool1 != pool2) {
cout << "!= is working..." << endl;
}
if (pool2 < pool1) {
cout << "< is working..." << endl;
}
if (pool1 == pool1) {
cout << "== is working..." << endl;
}
cout << "---printing pool1---" << endl;
cout << pool1 << endl;
cout << "---printing pool2---" << endl;
cout << pool2 << endl;
cout << "---reading pool1---" << endl;
cin  >> pool1;
cout << "---printing a revised pool1---" << endl;
cout << pool1 << endl;
cout << "---some broken code follows---" << endl;;
*/
try {
  SwimmingPool badPool = smallOne - bigOne;
  cout << "This should never happen..." << endl;
} catch( UnderflowingSwimmingPoolException uspe) {
  cout << "working..." << endl;
} catch( OverflowingSwimmingPoolException uspe) {
  cout << "This should never happen..." << endl;
}

try {
  smallOne.evaporate( 10000 );
  cout << "This should never happen..." << endl;
} catch( UnderflowingSwimmingPoolException) {
  cout << "working..." << endl;
} catch( OverflowingSwimmingPoolException) {
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
}
