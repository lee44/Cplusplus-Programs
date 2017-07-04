#ifndef UnderflowingSwimmingPoolException_H
#define UnderflowingSwimmingPoolException_H

#include <iostream>
#include <stdexcept>
using namespace std;

namespace cs52
{
class UnderflowingSwimmingPoolException : public std::logic_error
{
public:
    UnderflowingSwimmingPoolException();
     

};
}
#endif