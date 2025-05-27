#include<iostream>
using namespace std;

class Person {
public:
    void introduce() { cout << "I am a Person\n"; }
};

class Employee : public Person {
public:
    void jobRole() { cout << "I am an Employee\n"; }
};

class Manager : public Employee {
public:
    void manage() { cout << "I manage the team\n"; }
};

int main() {
    Manager m;
    m.introduce();
    m.jobRole();
    m.manage();
}
