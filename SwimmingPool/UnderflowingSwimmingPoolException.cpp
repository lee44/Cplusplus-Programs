#include <stdexcept>
#include <iostream>

class UnderflowingSwimmingPoolException : public std::logic_error
{
public:
    UnderflowingSwimmingPoolException() : std::logic_error("The swimming pool is underflowing")
    {
        std::cout <<what()<<std::endl;
    }

};
