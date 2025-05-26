#include<iostream>
using namespace std;

class shape
{
public:
    void setcolor(string c)
    {
        cout << "Setting color:"<< c << endl;
    }
};

class circle : public shape
{
public:
    void drawcircle()
    {
        cout << "Drawing circle." << endl;
    }
};

class rectangle : public shape
{
public:
    void drawrectangle()
    {
        cout << "Drawing rectangle." << endl;
    }
};


int main()
{
    rectangle r;
    r.setcolor("red");
    r.drawrectangle();


    circle c;
    c.setcolor("green");
    c.drawcircle();

    
    return 0;
}