#include <iostream>
using namespace std;

class print
{
public:
    void display(int num)
    {
        cout << "Printing number: " << num << endl;
    }

    void display(string name)
    {
        cout << "Printing name: " << name << endl;
    }
};
int main()
{
    print obj;
    obj.display(10);
    obj.display("Alice");
    return 0;
}