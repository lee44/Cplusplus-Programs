#include "Cat.h"
#include <iostream>
#include <string>

using namespace std;


    Cat::Cat( string name, int age, string color ):Pet( name, age)
    {
        my_CatColor=color;
    }
    string Cat::getColor( ) const
    {
        return my_CatColor;
    }
    void Cat::feed()
    {
        cout<<my_Name<<" walks away..."<<endl;
    }
    void Cat::pet(  )
    {
        cout<<my_Name<<" purrs..."<<endl;
    }
    void Cat::speak(  )
    {
        cout<<my_Name<<" walks away..."<<endl;
    }




