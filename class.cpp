#include<iostream>
using namespace std;

class book
{
public:
    string auther;
    string title;

    void display()
    {
        cout << auther << " - " << title << endl;
    }
};

int main()
{
    book b1;
    b1.auther = "Alice";
    b1.title = "C++";
    b1.display();//Output: Alice - 20
    return 0;
}