#include<iostream>
#include<string>
using namespace std;
class booking{
    public:
    string customername;
    int seats;
    booking(string name="",int s=1):customername(name),seats(s){}
    virtual void bookingticket()=0;
    virtual~booking(){}
};
class flightbooking : public booking {
public:
flightbooking(string name, int s):booking(name, s){}
    void bookingticket() override {
        cout << "Flight ticket booked for " <<customername << "." << endl;
        cout << "with"<< seats<<"seats(s)." << endl;
    }
};
class trainbooking : public booking {
public:
trainbooking(string name, int s):booking(name, s){}
    void bookingticket() override {
        cout << "Train ticket booked for " <<customername << "." << endl;
        cout << "with"<< seats<<"seats(s)." << endl;
    }
};
class busbooking : public booking {
public:
busbooking(string name, int s):booking(name, s){}
    void bookingticket() override {
        cout << "Bus ticket booked for " <<customername << "." << endl;
        cout << "with"<< seats<<"seats(s)." << endl;
    }
};
class bookingmanager{
public:
void confirmbooking(string name)
{
    cout<<"Booking confirmed for:"<<name<<endl;
}
void confirmbooking(string name, int seats)
{
    cout<<"Booking confirmed for:"<<name<<"with"<<seats<<"seats"<<endl;
}
void confirmbooking(string name, int seats, string date)
{
    cout<<"Booking confirmed for:"<<name
        <<"|Seats:"<<seats
        <<"|Date:"<<date<<endl;
}
};
class groupbooking{
public:
int totalseats;
groupbooking(int seats=0):totalseats(seats){}
groupbooking operator+(const groupbooking &others)
{
    return groupbooking(this->totalseats + others.totalseats);
}
void display()
{
    cout<<"total group seats booked:"<<totalseats<<endl;
}
};
int main()
{
    booking*booking1=new flightbooking("Sita", 2);
    booking*booking2=new trainbooking("Bob", 3);
    booking*booking3=new busbooking("ram", 1);
    booking1->bookingticket();
    booking2->bookingticket();
    booking3->bookingticket();
    cout<<"\n===Function overloading==="<<endl;
    bookingmanager manager;
    manager.confirmbooking("david");
    manager.confirmbooking("emma", 4);
    manager.confirmbooking("frank", 5,"2025-06-01");
    cout<<"\n===Operator overloading==="<<endl;
    groupbooking group1(4);
    groupbooking group2(6);
    groupbooking totalgroup= group1+group2;
    totalgroup.display();
    delete booking1;
    delete booking2;
    delete booking3;
    return 0;
}
