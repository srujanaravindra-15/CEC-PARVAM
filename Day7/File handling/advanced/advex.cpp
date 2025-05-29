#include<iostream>
#include<fstream>
#include<string>
#include<vector>

struct student
{
    std::string name;
    int age;
    float grade;
};

void writestudentstofile(const std::vector<student> &students, const std::string &filename)
{
    std::ofstream outfile(filename);
    if(outfile.is_open())
    {
        for(const auto &student : students)
        {
            outfile << student.name << "," << student.age << "," <<student.grade << "\n";
        }
        outfile.close();
        std::cout << "Student data written to file.\n";
    }
    else
    {
        std::cout << "Unable to open file for writing.\n";
    }
}

void readstudentsfromfile(const std::string &filename)
{
    std::ifstream infile(filename);
    if(infile.is_open())
    {
        std::string line;
        std::cout << "Reading student data from file:\n";
        while (std::getline(infile, line))
        {
            std::cout << line << "\n";
        }
        infile.close();
    }
    else
    {
        std::cout << "Unable to open file for reading.\n";
    }
}

int main()
{
std::vector<student> students = {
    {"Alice",20,88.5},
    {"Bob",22,91.2},
    {"Charlie",19,79.8}};

    std::string filename = "students.txt";
    writestudentstofile(students, filename);
    readstudentsfromfile(filename);

    return 0;
}
