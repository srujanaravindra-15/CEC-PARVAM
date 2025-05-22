#include<iostream>
using namespace std;

class calculator{
    public:
    int add(int a, int b);
    int subtraction(int a,int b);
};
int calculator::add(int a,int b){
    return a+b;
}
int calculator::subtraction(int a,int b){
    return a-b;
}
int main(){
    calculator calc;
    cout<<"Add:"<<calc.add(10,5)<<endl;
    cout<<"subtraction:"<<calc.subtraction(10,5)<<endl;
    return 0;
}