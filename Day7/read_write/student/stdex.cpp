#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
using namespace std;

string getcurrenttime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    string timestr(dt);
    timestr.pop_back();
    return timestr;
}

void writelog(int userID, const string &action)
{
    ofstream outfile("log.txt", ios::app);
    if(!outfile)
    {
        cerr << "Error: Could not open log.txt for writing.\n";
        return;
    }
    
    outfile << "[UserID: " << userID <<"] " << action << " at " << getcurrenttime << endl;
    outfile.close();
    cout << "Log written successfully.\n";
}

void readlogs()
{
    ifstream infile("log.txt");
    if(infile)
    {
        cerr << "Error: Could not open log.txt for reading.\n";
        return;
    }
    
    cout << "\n--- Log File contents ---\n";
    string line;
    while (getline(infile,line))
    {
        cout << line << endl;
    }
    infile.close();
}

void clearlogs()
{
    ofstream outfile("log.txt", ios::trunc);
    if(!outfile)
    {
        cerr << "Error: Could not open log.txt to clear.\n";
        return;
    }
    
    outfile.close();
    cout << "All logs have been cleared.\n";
}

int main()
{
    int choice, userID;
    string action;

    do
    {
        cout << "\n===== Log Management Menu =====\n";
        cout << "1. Write a Log\n";
        cout << "2. View All Logs\n";
        cout << "3. Clear Log File\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter User ID: ";
            cin >> userID;
            cin.ignore();
            cout << "Enter action (e.g., Logged In, Viewed Page): ";
            getline(cin, action);
            writelog(userID, action);
            break;
        case 2:
            readlogs();
            break;
        case 3:
            clearlogs();
            break;
        case 4:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }while(choice != 4);

    return 0;
}

