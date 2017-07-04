#include "Pet.h"

Pet::Pet( string name, int age )
{
    my_Name=name;
    my_Age=age;
}
void Pet:: feed()
{

}
void Pet::pet()
{

}
void Pet::speak()
{

}
string Pet::getName()
{
    return my_Name;
}
int Pet::getAge()
{
    return my_Age;
}
