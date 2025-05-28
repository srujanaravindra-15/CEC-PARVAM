#include <iostream>
#include <string>
using namespace std;

class Vehicle 
{
private:
    string model;
    int year;
    string owner;
public:
    void input() 
    {
        cout << "Enter vehicle model: ";
        getline(cin, model);
        cout << "Enter vehicle year: ";
        cin >> year;
        cin.ignore(); 
        cout << "Enter owner name: ";
        getline(cin, owner);
    }
    void display() const 
    {
        cout << "Model : " << model << endl;
        cout << "Year  : " << year << endl;
        cout << "Owner : " << owner << endl;
        cout << "-----------------------" << endl;
    }
};

int main() 
{
    int numVehicles;
    cout << "Enter the number of vehicles rented today: ";
    cin >> numVehicles;
    cin.ignore(); 
    
    Vehicle** fleet = new Vehicle*[numVehicles];
    
    for (int i = 0; i < numVehicles; ++i) 
    {
        cout << "\nEnter details for Vehicle " << i + 1 << ":\n";
        fleet[i] = new Vehicle();
        fleet[i]->input();
    }
    
    cout << "\n--- Vehicle Details ---\n";
    for (int i = 0; i < numVehicles; ++i) 
    {
        cout << "Vehicle " << i + 1 << ":\n";
        fleet[i]->display();
    }
    
    for (int i = 0; i < numVehicles; ++i) 
    {
        delete fleet[i];
    }
    delete[] fleet;
    return 0;
}