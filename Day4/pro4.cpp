#include<iostream>
using namespace std;

class camera
{
    public:
    void takephoto()
    {
        cout<<"Taking photo..."<<endl;
    }
};

class phone
{
    public:
    void makecall()
    {
        cout<<"Making a call..."<<endl;
    }
};

class smartphone : public camera,public phone
{
    public:
    void browseinternet()
    {
        cout<<"Browsing internet..."<<endl;
    }
};

int main()
{
    smartphone sp;
    sp.takephoto();
    sp.makecall();
    sp.browseinternet();
    return 0;
}