#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    string usn;
    string collegename;
    student(string n,int a,string b,string clgname)
    {
        name = n;
        age = a;
        usn = b;
        collegename = clgname;
        cout << "Name: " << name << ", Age: " << age << ", USN: " << usn << ", College name: " << collegename << endl;
    }
};
int main()
{
    student s1("Pavan",21,"1CE24AI002","CITY ENGINEERI8NG COLLEGE");
    return 0;
}