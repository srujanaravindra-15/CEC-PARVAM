#include<iostream>
using namespace std;

class Bus {
public:
    string busNumber;
    string route;
    int capacity;

    void display() {
        cout << "Bus Number: " << busNumber << endl;
        cout << "Route: " << route << endl;
        cout << "Capacity: " << capacity << " passengers" << endl;
    }
};

int main() {
    Bus b1;
    b1.busNumber = "KA05 1234";
    b1.route = "City Center to Airport";
    b1.capacity = 40;

    b1.display();
    return 0;
}






#include<iostream>
using namespace std;

class Mobile {
public:
    string brand;
    string model;
    float price;

    void showDetails() {
        cout << "Brand: " << brand << ", Model: " << model << ", Price: ₹" << price << endl;
    }
};

int main() {
    Mobile m1;
    m1.brand = "Samsung";
    m1.model = "Galaxy A14";
    m1.price = 14999;

    m1.showDetails();
    return 0;
}
