#include<iostream>
#include<fstream>
#include<string>

int main()
{
    //writing to a file
    std::ofstream outfile("data.txt");
    outfile << "C++ File I/O";
    outfile.close();

    //reading from a file
    std::ifstream infile("data.txt");
    std::string content;
    infile >> content;
    infile.close();

    std::cout <<"Read from file: " << content << "\n";
    return 0;
}