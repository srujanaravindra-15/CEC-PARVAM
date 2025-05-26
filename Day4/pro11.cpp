#include <iostream>
#include <string>
using namespace std;


class Person 
{
protected:
    string name;
    int age;

public:
    void setDetails(string n, int a) 
    {
        name = n;
        age = a;
    }
};

class Patient : public Person 
{
private:
    string disease;
    float billAmount;

public:
    void setMedicalInfo(string d, float billamt) 
    {
        disease = d;
        billAmount = billamt;
    }

    void displayDetails() 
    {
        cout << "Patient Name : " << name << endl;
        cout << "Patient Age : " << age << endl;
        cout << "Disease : " << disease << endl;
        cout << "Bill Amount : $" << billAmount << endl;
        cout << "Reviewing patient's condition: " << disease << endl;
    }
};

int main() 
{
    Patient p;
    p.setDetails("John Doe", 45);
    p.setMedicalInfo("Pneumonia", 3200.5);
    p.displayDetails();

    return 0;
}
