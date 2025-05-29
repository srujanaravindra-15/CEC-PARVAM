#include<iostream>

int main()
{
    try
    {
        int age = 15;
        if (age < 18)
        {
            throw age;
        }
        else
        {
            std::cout << "Access granted.\n";
        }
    }
    catch (int mynum)
    {
        std::cout << "Access denied. Age is: " << mynum << "\n";
    }
    return 0;
    
}