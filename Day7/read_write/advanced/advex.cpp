#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
#include<cstring>

void logactivity(const std::string &activity, const std::string &filename)
{
    std::ofstream outfile(filename, std::ios::app);
    if(outfile.is_open())
    {
        //Get current time
        std::time_t now = std::time(nullptr);
        char *dt = std::ctime(&now);
        //Remove newline character from ctime
        dt[strcspn(dt,"\n")] = '\0';
        outfile << "[" << dt << "] " << activity <<"\n";
        outfile.close();
        std::cout << "Activity logged.\n";
    }
    else
    {
        std::cout << "Unable to open file log file.\n";
    }
}

void readlog(const std::string &filename)
{
    std::ifstream infile(filename);
    if(infile.is_open())
    {
        std::string line;
        std::cout << "Activity Log:\n";
        while (std::getline(infile, line))
        {
            std::cout << line << "\n";
        }
        infile.close();
    }
    else
    {
        std::cout << "Unable to open log file.\n";
    }
}

int main()
{
    std::string filename = "activity.txt";
    logactivity("User logged in", filename);
    logactivity("User performed on action", filename);
    readlog(filename);
    return 0;
}

