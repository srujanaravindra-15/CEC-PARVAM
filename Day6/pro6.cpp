#include <iostream>
#include <string>
using namespace std;

class Product 
{
private:
    string name;
    double price;
    double discount;
public:
    Product(string n, double p) 
    {
        name = n;
        price = p;
        discount = 0.0;
    }
    Product& setDiscount(double d) 
    {
        discount = d;
        return *this;
    }
    double getFinalPrice() const 
    {
        return price - (price * discount / 100);
    }
    void showInfo() const 
    {
        cout << "Product Name     : " << name << endl;
        cout << "Original Price   : ₹" << price << endl;
        cout << "Discount         : " << discount << "%" << endl;
        cout << "Final Price      : ₹" << getFinalPrice() << endl;
        cout << "------------------------------" << endl;
    }
    static void compare(const Product& p1, const Product& p2) 
    {
        cout << "Comparing Products:\n";
        if (p1.getFinalPrice() > p2.getFinalPrice()) 
        {
            cout << p1.name << " is more expensive than " << p2.name << " after discount.\n";
        } else if (p1.getFinalPrice() < p2.getFinalPrice()) 
        {
            cout << p2.name << " is more expensive than " << p1.name << " after discount.\n";
        } else 
        {
            cout << "Both products have the same final price.\n";
        }
        cout << "==============================\n";
    }
};


int main() 
{
    Product laptop("Laptop", 50000);
    Product tablet("Tablet", 30000);
    laptop.setDiscount(10).showInfo();
    tablet.setDiscount(5).showInfo();
    Product::compare(laptop, tablet);
    return 0;
}