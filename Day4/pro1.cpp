#include<iostream>
using namespace std;

//base class
class Vehicle
{
public:
    void start()
    {
        cout << "Vehicle has started." << endl;
    }
};

//derived class
class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Car is driving." << endl;
    }
};
int main()
{
    Car myCar;
    myCar.start();
    myCar.drive();
    return 0;
}