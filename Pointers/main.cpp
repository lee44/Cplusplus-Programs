#include <iostream>

using namespace std;

int main()
{
    double  d1, d2;

double *pd1,*pd2;
d2 = 10.0;
pd1 = new double( 22.5 );
pd2 = &d2;
*pd1 = *pd2;
*pd2 = 33.4;
d2 = 5.0;
cout << *pd1 << endl;
cout << *pd2 << endl;
if (*pd1 == *pd2) {
   cout << "stars =" << endl;
}
if (pd1 == pd2) {
   cout << "pointers =" << endl;
}




    return 0;
}
