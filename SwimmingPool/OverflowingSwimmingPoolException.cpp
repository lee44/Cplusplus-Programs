#include <stdexcept>
#include <iostream>


class OverflowingSwimmingPoolException: public std::logic_error
{
public:
    OverflowingSwimmingPoolException() : std::logic_error("The swimming pool is overflowing")
    {
        std::cout <<what()<<std::endl;
    }

};
