#ifndef SWIMMINGPOOL_H
#define SWIMMINGPOOL_H
#include <iostream>
#include <cstdlib>


namespace cs52 {

class SwimmingPool {
public:
  SwimmingPool( int size );
  void fill( int amount );
  void splash( );
  void swim( );
  void evaporate( int amount );
  int getSize( )const;
  int getContents( )const;
  void setSize( int size );

  friend SwimmingPool operator +(const SwimmingPool &s1,const SwimmingPool &s2);
  friend SwimmingPool operator-(const SwimmingPool &s1,const SwimmingPool &s2);
  friend std::ostream& operator<<(std::ostream& out, SwimmingPool& f);
  friend std::istream& operator>>(std::istream& in, SwimmingPool& f);
  friend bool operator>(const SwimmingPool& s1,const SwimmingPool& s2);
  friend bool operator==(const SwimmingPool& s1,const SwimmingPool& s2);
  friend bool operator<(const SwimmingPool& s1,const SwimmingPool& s2);
  friend bool operator!=(const SwimmingPool& s1,const SwimmingPool& s2);

private:
  int mySize;		// how big the pool is
  int myContents;	// how full the pool is
};
}
#endif
