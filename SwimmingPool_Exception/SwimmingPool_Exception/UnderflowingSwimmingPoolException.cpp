#include <stdexcept>
#include <iostream>
#include "UnderflowingSwimmingPoolException.h"

namespace cs52
{
UnderflowingSwimmingPoolException::UnderflowingSwimmingPoolException() : std::logic_error("The swimming pool is underflowing")
{
	std::cout <<what()<<std::endl;
}
}
