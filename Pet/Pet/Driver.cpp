#include <iostream>
#include <string>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

int main()
{
Pet * pet = NULL;

Dog * mine = new Dog( "Muffin", 1, "Standard Poodle" );

Cat * yours = new Cat( "Sunset", 2, "Calico" );

cout << "These methods work on cat instances" << endl;

yours->feed( );

yours->pet( );

yours->speak( );
 
cout << "These methods work on dog instances" << endl;

mine->feed( );

mine->pet( );

mine->speak( );

pet = mine;

cout << "These methods work on pet pointers to a dog" << endl;

pet->feed( );

pet->pet( );

pet->speak( );

pet = yours;

cout << "These methods work on pet pointers to a cat" << endl;

pet->feed( );

pet->pet( );

pet->speak( );
 
// Why doesn't this compile??? because you cant instantiate an abstract class like Pet

// Pet * aPet = new Pet( "name", 12 );


	system("pause");
}