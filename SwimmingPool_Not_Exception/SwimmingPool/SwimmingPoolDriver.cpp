#include <iostream>
#include "SwimmingPool.h"


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


cout << "--some tests follow--"<< endl;
SwimmingPool pool1 = mine + mine;
SwimmingPool pool2 = yours - yours;
cin  >> pool1;
cout << "---printing pool1---" << endl;
cout << pool1 << endl;
cout << "---printing pool2---" << endl;
cout << pool2 << endl;


cout << "---some broken code follows---" << endl;

SwimmingPool badPool = smallOne - bigOne;
}
