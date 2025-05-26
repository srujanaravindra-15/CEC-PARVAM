#include<iostream>
using namespace std;

class animal
{
public:
    void breathe()
    {
        cout << "Animal breathing..." << endl;
    }
};

class mammal : public animal
{
public:
    void feedmilk()
    {
        cout << "Mammal feeding milk to babies." << endl;
    }
};

class dog : public mammal
{
public:
    void bark()
    {
        cout << "Dog barking!" << endl;
    }
};


int main()
{
    dog d;
    d.breathe();
    d.feedmilk();
    d.bark();
    return 0;
}