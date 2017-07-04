#ifndef PET_H_INCLUDED
#define PET_H_INCLUDED
#include <string>

using namespace std;

class Pet
{
public:
    Pet( string name, int age );
    void feed(  );
    void pet(  );
    void speak(  );
    string getName( );
    int getAge( );
    virtual void onFeed(  ) = 0;
    virtual void onPet(  ) = 0;
    virtual void onSpeak(  ) = 0;

protected:
    string my_Name;
    int my_Age;

};



#endif // PET_H_INCLUDED
