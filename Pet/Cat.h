#ifndef CAT_H_INCLUDED
#define CAT_H_INCLUDED

#include <string>
#include "Pet.h"

using namespace std;

class Cat : public Pet
{
public:
    Cat(string name, int age, string color);
    string getColor( ) const;
    void feed();
    void pet();
    void speak();
    virtual void onFeed(  );
    virtual void onPet(  );
    virtual void onSpeak(  );

private:
    string my_CatColor;
};

#endif // CAT_H_INCLUDED
