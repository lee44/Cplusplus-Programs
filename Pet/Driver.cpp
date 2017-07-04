#include <iostream>

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

Pet::Pet( string name, int age ):my_Name(name),my_Age(age)
{

}
void Pet::feed(  )
{

}
void Pet::pet(  )
{

}
void Pet::speak(  )
{

}
string Pet::getName( )
{
	return my_Name;
}
int Pet::getAge( )
{
	return my_Age;
}

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

Cat::Cat(string name, int age, string color) : Pet(name,age)
{
	my_CatColor=color;
}
void Cat::onFeed()
{

}

void Cat::onPet()
{

}

void Cat::onSpeak()
{

}

void Cat::feed()
{
	cout<<" walks away..."<<endl;
}
void Cat::pet()
{
	cout<<" purrs..."<<endl;
}
void Cat::speak()
{
	cout<<" walks away..."<<endl;
}

int main()
{
	Cat * yours = new Cat( "Sunset", 2, "Calico" );

	yours->feed();


}
