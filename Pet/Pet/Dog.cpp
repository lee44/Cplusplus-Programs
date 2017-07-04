#include <iostream>
#include <string>
#include "Dog.h"

using namespace std;


Dog::Dog(string name, int age, string breed) : Pet(name,age) ,my_DoggieBreed(breed)
{}
void Dog::onFeed()
{
	cout<<my_Name<<" chows down!"<<endl;
}

void Dog::onPet()
{
	cout<<my_Name<<" yelps!"<<endl;
}

void Dog::onSpeak()
{
	cout<<my_Name<<" barks!"<<endl;
}


string Dog::getBreed()const
{
	return my_DoggieBreed;
}