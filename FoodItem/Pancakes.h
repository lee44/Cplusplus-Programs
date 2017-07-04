#ifndef PANCAKES_H_INCLUDED
#define PANCAKES_H_INCLUDED

#include "FoodItem.h"


class Pancakes : public FoodItem
{
public:
    Pancakes();
    Pancakes(int number);

private:
    int howMany;
};



#endif // PANCAKES_H_INCLUDED
