// Fooditem.h - implementation file
#ifndef FOODITEM_H
#define FOODITEM_H

#include <iostream>
using namespace std;

class FoodItem
{
public:
        enum KIND {BREAKFAST, LUNCH, DINNER, SNACK };

        FoodItem(string name, KIND kindOfItem);

        string getName() const;

        KIND getKind() const;

private:
        KIND myKind;
        string myName;
};

#endif // !FOODITEM_H
