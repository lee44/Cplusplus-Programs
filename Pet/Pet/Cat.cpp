#include "Cat.h"

#include <iostream>

using namespace std;

Cat::Cat(string name, int age, string color) : Pet(name,age) ,my_CatColor(color)
{}
void Cat::onFeed()
{
	cout<<my_Name<<" walks away..."<<endl;
}

void Cat::onPet()
{
	cout<<my_Name<<" purrs..."<<endl;
}

void Cat::onSpeak()
{
	cout<<my_Name<<" walks away..."<<endl;
}

string Cat::getColor() 
{
	return my_CatColor;
}