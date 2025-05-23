#include<iostream>
using namespace std;
class demo
{
    public:
    demo()
    {
        cout << "Constructor called!" << endl;
    }
    ~demo()
    {
        cout << "Destrutor called!" << endl;
    }
};
int main()
{
    demo d1;
    return 0;
}