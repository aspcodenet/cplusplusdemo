
#include <stdexcept>

#include "person.h"

Person::Person(int age, std::string firstName, std::string lastName)
{
    this->setAge(age);
    this->firstName = firstName;
    this->lastName = lastName;
}

void Person::setAge(int age)
{
    if(age < 0){
        throw std::invalid_argument("age is invalid");
    }
    // if age < 0 exception
    this->age = age;
}
int Person::getAge(){
    return this->age;
}


