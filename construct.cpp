#include "construct.h"

int main (void){
    cout << "Constructing a person using a person class" << endl;
    Person p1("Dan", 23);
    p1.haveBirthday();
    cout << p1.getName() << " is " << p1.getAge() << " years old." << endl;
    return 0;
}