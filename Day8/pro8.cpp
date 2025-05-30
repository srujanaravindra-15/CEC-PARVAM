#include<iostream>
#include<string>
using namespace std;
void bubblesort(int ids[], string titles[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(ids[j]>ids[j+1])
            {
                swap(ids[j], ids[j+1]);
                swap(titles[j], titles[j+1]);
            }
        }
    }
}
int binarysearch(int arr[], int size, int key)
{
    int left=0,right= size-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        left=mid+1;
        else
        right=mid-1;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    int *bookId=new int[n];
    string *titles=new string[n];
    cout<<"\nEnter Book ID and Titles:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Book "<<i+1<<" ID: ";
        cin>>bookId[i];
        cin.ignore();
        cout<<"Book "<<i+1<<" Title: ";
        getline(cin, titles[i]);
    }
    bubblesort(bookId, titles, n);
    char choice;
    do
    {
       int searchID;
       cout<<"\nEnter Book Id to search: ";
       cin>>searchID;
       int index=binarysearch(bookId, n, searchID);
       if(index !=-1)
       cout<<"Book Found: "<<titles[index]<<"(ID: "<<bookId[index]<<")\n";
       else
       cout<<"Book Not Found!\n";
       cout << "Do you want to search another (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    delete[] bookId;
    delete[] titles;
    return 0;
}