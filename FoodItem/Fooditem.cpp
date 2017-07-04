// Fooditem.cpp - implementation file
#include <iostream>
#include "FoodItem.h"

using namespace std;

FoodItem::FoodItem(string name, KIND kindOfItem): myName(name), myKind(kindOfItem)
{}

FoodItem::KIND FoodItem::getKind() const
{
        return myKind;
}

string FoodItem::getName() const
{
        return myName;
}
