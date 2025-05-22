#include <iostream>
using namespace std;

class account
{
private:
    int Balance;
public:
    void setBalance(int b){
        Balance=b;
    }
    int getBalance(){
        return Balance;
    }
};

int main(){
    account acc;
    acc.setBalance(1000);
    cout<<"Balance"<<acc.getBalance()<<endl;
    return 0;
}