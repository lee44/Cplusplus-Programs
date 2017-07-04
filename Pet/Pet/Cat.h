#ifndef CAT_H_INCLUDED
#define CAT_H_INCLUDED

#include <string>
#include "Pet.h"


using namespace std;

class Cat : public Pet
{
public:
	Cat(string name, int age, string color);
	string getColor( );
	
	virtual void onFeed(  );
	virtual void onPet(  );
	virtual void onSpeak(  );

private:
	string my_CatColor const;
};

#endif // CAT_H_INCLUDED
