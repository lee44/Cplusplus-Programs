#include <iostream>
#include "Pancakes.h"

using namespace std;

Pancakes::Pancakes(): FoodItem("Pancakes",BREAKFAST)
{

}

Pancakes::Pancakes(int number) :FoodItem("Pancakes",BREAKFAST)
{
    howMany=number;
}

