#ifndef __PERSON_H
#define __PERSON_H

#include <string>

class Person {
private:
    int age;
    int birthMonth;
    std::string firstName;
    std::string lastName;
public:
    Person(int age, std::string firstName,  std::string lastName);
    void setAge(int age);
    int getAge();
};

#endif