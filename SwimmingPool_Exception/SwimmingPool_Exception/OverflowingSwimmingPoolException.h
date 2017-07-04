#ifndef OverflowingSwimmingPoolException_H
#define OverflowingSwimmingPoolException_H

#include <iostream>
#include <stdexcept>
using namespace std;

namespace cs52
{
class OverflowingSwimmingPoolException: public std::logic_error
{
public:
    OverflowingSwimmingPoolException();
     
};
}
#endif