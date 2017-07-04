#include "Pet.h"
#include <string>
#include <iostream>

using namespace std;

Pet::Pet( string name, int age ):my_Name(name),my_Age(age)
{}

void Pet::feed()
{
	onFeed();
}
void Pet::pet()
{
	onPet();
}
void Pet::speak()
{
	onSpeak();
}
string Pet::getName()
{
	return my_Name;
}
int Pet::getAge()
{
	return my_Age;
}
