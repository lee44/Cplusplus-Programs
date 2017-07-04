#include <stdexcept>
#include <iostream>
#include "OverflowingSwimmingPoolException.h"

namespace cs52
{
OverflowingSwimmingPoolException::OverflowingSwimmingPoolException() : std::logic_error("The swimming pool is overflowing")
{
        std::cout <<what()<<std::endl;
}
}