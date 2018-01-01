#include "Person.h"

Person::Person(string word, int number){
    name = word;
    age = number;
}

void Person::haveBirthday(){
    age++;
}