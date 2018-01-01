#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person{
    string name;
    int age;
public:
    Person(string name, int age);
    void haveBirthday();
    int getAge(){ return age; }
    string getName() {return name; }
};

#endif