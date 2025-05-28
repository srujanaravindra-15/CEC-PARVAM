#include <iostream>
using namespace std;

class FIR 
{
public:
    virtual void registerFIR(string name) = 0; 
};

class Theft : public FIR 
{
public:
    void registerFIR(string name) override 
    {
        cout << "Theft FIR registered for " << name << ".\n";
        cout << "Action: Investigation started for stolen property.\n";
    }
};

// Derived class for Accident FIR
class Accident : public FIR 
{
public:
    void registerFIR(string name) override 
    {
        cout << "Accident FIR registered for " << name << ".\n";
        cout << "Action: Ambulance dispatched and accident site team notified.\n";
    }
};

// Derived class for Missing Person FIR
class MissingPerson : public FIR 
{
public:
    void registerFIR(string name) override 
    {
        cout << "Missing Person FIR registered for " << name << ".\n";
        cout << "Action: Local units alerted and investigation initiated.\n";
    }
};

// Main function
int main() 
{
    cout << "=== FIR Registration ===\n";
    FIR* fir;
    fir = new Theft();
    fir->registerFIR("Ravi");
    delete fir;
    cout << endl;
    fir = new Accident();
    fir->registerFIR("Sita");
    delete fir;
    cout << endl;
    fir = new MissingPerson();
    fir->registerFIR("Karan");
    delete fir;
    return 0;
}