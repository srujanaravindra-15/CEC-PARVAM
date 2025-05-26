#include <iostream>
using namespace std;

class user
{
public:
    string name, email;
    void login()
    {
        cout << name << " logged in with email " << email << endl;
    }
};

class customer : public user
{
    public:
    void browseproducts()
    {
        cout << name << " is browsing products." << endl;
    }
};

int main()
{
    customer c;
    c.name = "Alice";
    c.email = "alice@example.com";
    c.login();
    c.browseproducts();
    return 0;
}
