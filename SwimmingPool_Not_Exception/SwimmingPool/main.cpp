#include "SwimmingPool.h"
#include <iostream>
namespace cs52 {

SwimmingPool operator+(const SwimmingPool &s1,const SwimmingPool &s2)
{
    SwimmingPool value(0);
    value.mySize=s1.mySize+s2.mySize;
    value.myContents=s1.myContents+s2.myContents;
    return (value);
}

 SwimmingPool operator-(const SwimmingPool &s1,const SwimmingPool &s2)
{
    using namespace std;
    SwimmingPool value(0);

    if(s1.mySize<s2.mySize)
        cout<<"Error swimming pool cannot have negative size"<<endl;
    else
        value.mySize=s1.mySize-s2.mySize;

    if(s1.myContents<s2.myContents)
        cout<<"Error swimming pool cannot have negative contents"<<endl;
    else
        value.myContents=s1.myContents-s2.myContents;


    return (value);
}

bool operator>(const SwimmingPool& s1,const SwimmingPool& s2)
{
   return (s1.mySize>s2.mySize);
}

bool operator<(const SwimmingPool& s1,const SwimmingPool& s2)
{
    return (s1.mySize<s2.mySize);
}

bool operator!=(const SwimmingPool& s1,const SwimmingPool& s2)
{
    return !(s1.mySize == s2.mySize);
}

bool operator==(const SwimmingPool& s1,const SwimmingPool& s2)
{
    return (s1.mySize==s2.mySize);
}

std::ostream& operator<<(std::ostream& out, SwimmingPool& f)
{
   out << "Size: "<<f.mySize<<"\nContents: "<<f.myContents;

   return out;
}

std::istream& operator>>(std::istream& in, SwimmingPool& f)
{
    in>>f.mySize;
    return in;
}


SwimmingPool::SwimmingPool( int size )
{
  using namespace std;

  if(size<0)
    cout<<"Error size of swimming pool cannot be negative"<<endl;
  else
    mySize = size;

  myContents = 0;
}

void SwimmingPool::fill( int amount )
{
  using namespace std;

  if(amount<0)
    cout<<"Error you cannot fill swimming pool with a negative value"<<endl;
  else
    {
       if((myContents+amount)<=getSize())
        myContents += amount;
       else
        cout<<"Error size of swimming pool must be greater than its contents"<<endl;
    }
}

void SwimmingPool::splash( )
{
    using namespace std;
  cout << "some splashing in this pool..." << endl;
}

void SwimmingPool::swim( )
{
    using namespace std;
  cout << "some swimming in this pool..." << endl;
}

void SwimmingPool::evaporate( int amount )
{
    using namespace std;
  if(myContents<amount)
    cout<<"Error contents cannot be negative"<<endl;
  else
    myContents -= amount;
}

int SwimmingPool::getSize( )const {
  return( mySize );
}

int SwimmingPool::getContents( )const {
  return( myContents );
}

void SwimmingPool::setSize( int size ) {
  mySize = size;
}
}
