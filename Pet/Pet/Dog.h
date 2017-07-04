#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED

#include <string>
#include "Pet.h"


using namespace std;

class Dog : public Pet
{
public:
	Dog( string name, int age, string breed );
	string getBreed( ) const;
	virtual void onFeed(  );
	virtual void onPet(  );
	virtual void onSpeak(  );
private:
	string my_DoggieBreed;
};
#endif  