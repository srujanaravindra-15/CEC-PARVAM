#include<iostream>
using namespace std;
class animal
{
    public:
    virtual void sound() = 0;
    virtual ~animal(){}
};

class dog : public animal{
    public:
    void sound() override
    {
        cout << "Dog says: Woof!" << endl;
    }
};

class cat : public animal{
    public:
    void sound() override
    {
        cout << "Cat says: Meow!" << endl;
    }
};

int main()
{
    animal *a1 = new dog();
    animal *a2 = new cat();

    a1->sound();
    a2->sound();

    delete a1;
    delete a2;

    return 0;
}