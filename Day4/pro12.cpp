#include <iostream>
using namespace std;

class SavingsAccount 
{
public:
    string accountHolder;
    float balance;
    float interestRate;
    void setAccountDetails(string name, float bal, float rate) 
    {
        accountHolder = name;
        balance = bal;
        interestRate = rate;
    }
    void displayAccount() 
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class PremiumSavingsAccount : public SavingsAccount 
{
protected:
    float premiumInterest;

public:
    void setPremiumInterest() 
    {
        premiumInterest = interestRate + (interestRate * 0.10); // 10% more
    }
    void displayPremiumAccount() 
    {
        cout << "Account Holder (Premium): " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Base Interest Rate: " << interestRate << "%" << endl;
        cout << "Premium Interest Rate: " << premiumInterest << "%" << endl;
    }
};

int main() 
{
    SavingsAccount normal;
    normal.setAccountDetails("Alice", 5000, 5.0);
    cout << "---- Normal Savings Account ----" << endl;
    normal.displayAccount();
    PremiumSavingsAccount premium;
    premium.setAccountDetails("Bob", 10000, 15.0);
    premium.setPremiumInterest();
    cout << "\n---- Premium Savings Account ----" << endl;
    premium.displayPremiumAccount();
    return 0;
}