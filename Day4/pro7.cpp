#include<iostream>
using namespace std;

class person
{
public:
    void introduce()
    {
        cout << "i am a person."<< endl;
    }
};

class student : public person
{
public:
    void study()
    {
        cout << "Studying..." << endl;
    }
};

class employee : public person
{
public:
    void work()
    {
        cout << "Working..." << endl;
    }
};

class workingstudent : public student, public employee
{
public:
    void manage()
    {
        cout << "Managing both work and studies." << endl;
    }
};


int main()
{
    workingstudent st;
    st.student::introduce();
    st.employee::introduce();
    st.study();
    st.work();
    st.manage();
    return 0;
}