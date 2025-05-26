#include <iostream>
using namespace std;

class Person 
{
public:
    void displayPerson()
    {
        cout << "I am a person in the university.\n"<<endl;
    }
};

class Student : virtual public Person 
{
public:
    void displayStudent() 
    {
        cout << "I am a student with basic student info.\n"<<endl;
    }
};

class GraduateStudent : public Student 
{
public:
    void displayGraduateStudent() 
    {
        cout << "I am a graduate student with a research topic.\n"<<endl;
    }
};

class Employee 
{
public:
    void displayEmployee() 
    {
        cout << "I am a university employee.\n"<<endl;
    }
};

class TeachingAssistant : public Student, public Employee 
{
public:
    void displayTeachingAssistant() 
    {
        cout << "I am a teaching assistant (student + employee).\n"<<endl;
    }
};

class Professor : virtual public Person 
{
public:
    void displayProfessor() 
    {
        cout << "I am a professor teaching subjects.\n"<<endl;
    }
};


class ResearchProfessor : public Professor, public GraduateStudent 
{
public:
    void displayResearchProfessor() 
    {
        cout << "I am a research professor (teach + research).\n"<<endl;
    }
};


int main() {
    cout << "--- Person ---\n";
    Person p;
    p.displayPerson();

    cout << "\n--- Student ---\n";
    Student s;
    s.displayPerson();
    s.displayStudent();

    cout << "\n--- Graduate Student ---\n";
    GraduateStudent gs;
    gs.displayPerson();
    gs.displayStudent();
    gs.displayGraduateStudent();

    cout << "\n--- Employee ---\n";
    Employee e;
    e.displayEmployee();

    cout << "\n--- Teaching Assistant (Multiple Inheritance) ---\n";
    TeachingAssistant ta;
    ta.displayStudent();      
    ta.displayEmployee();      
    ta.displayTeachingAssistant();

    cout << "\n--- Professor ---\n";
    Professor prof;
    prof.displayPerson();
    prof.displayProfessor();

    cout << "\n--- Research Professor (Hybrid Inheritance) ---\n";
    ResearchProfessor rp;
    rp.displayPerson();            
    rp.displayStudent();           
    rp.displayGraduateStudent();   
    rp.displayProfessor();          
    rp.displayResearchProfessor();  

    return 0;
}