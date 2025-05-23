#include <iostream>
using namespace std;
class book
{
    public:
    string title;
    string author;
    float price;

    book(string t,string a, float p) : title(t), author(a), price(p) {}
    
    void display()
    {
        cout<< "Title: " << title << ", Author: " << author << ", Price: $" <<price << endl;
    }
};
int main(){
    book b("C++ Programming","Author Name",29.99);
    b.display();
    return 0;
}