#include <iostream>
using namespace std;

void displayBedoccupancy(int *patientIDs,int *bedIDs, int size)
{
    cout << "Hospital Bed Occupancy:\n";
    for(int i = 0; i < size;i++)
    {
        cout << "Bed ID: "<< *(bedIDs + i) << "| Patient ID: " << *(patientIDs + i) << " " ;
    }
    cout << endl;
}

int main()
{
    const int size = 5;
    int bedIDs[size] = {201,202,203,204,205};
    int patientIDs[size] = {101,102,103,104,105};
    
    int *ptrPatient = patientIDs;
    int *ptrBed = bedIDs;

    displayBedoccupancy(ptrPatient, ptrBed, size);

    *(ptrPatient + 2) = 108;

    cout << "After Updating Patient in Bed 203:\n";
    displayBedoccupancy(ptrPatient, ptrBed, size);

    return 0;
}