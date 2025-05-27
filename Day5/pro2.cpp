#include <iostream>
using namespace std;

class invoice
{
public:
    void generateInvoice(int productID) 
    {
        cout << "Generating invoice for product ID: " << productID << endl;
        cout << "Default quantity: 1 | No discount applied." << endl;
    }

    void generateInvoice(int productID, int quantity) 
    {
        cout << "Generating invoice for product ID: " << productID << endl;
        cout << "Quantity: " << quantity << " | No discount applied." << endl;
    }

    void generateInvoice(int productID, int quantity, float discount) 
    { 
        cout << "Generating invoice for product ID: " << productID << endl;
        cout << "Quantity: " << quantity << " | Discount: " << discount << "%" << endl;
    }
};

int main()
{
    invoice inv;
    inv.generateInvoice(101);
    inv.generateInvoice(102, 3);
    inv.generateInvoice(103, 5, 10.5);
    return 0;
}