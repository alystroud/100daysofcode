#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>

using namespace std;

class Person{
    string name;
    int age;
public:
    Person(string name, int age);
    void haveBirthday();
    int getAge(){ return age; }
    string getName() {return name; }
    ~Person(){
        cout << "Destructing person" << endl;
    }
};

#endif