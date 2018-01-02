#include "Person.h"

Person::Person(string word, int number){
    cout << "Creating a person" << endl;
    name = word;
    age = number;
}

void Person::haveBirthday(){
    age++;
}