#include<iostream>
using namespace std;

class BankAccount
{
protected:
    double balance;

public:
    void setbalance(double b)
    {
        balance = b;
    }
};
class savingsaccount : public BankAccount
{
public:
    void showbalance()
    {
        cout << "Balance is: $"<<balance<<endl;
    }
};
int main()
{
    savingsaccount acc;
    acc.setbalance(1000.50);
    acc.showbalance();
    return 0;
}