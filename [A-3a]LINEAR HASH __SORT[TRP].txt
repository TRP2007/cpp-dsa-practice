#include <iostream>
#include <cstring>
using namespace std;

struct record 
{
    char name[10];
    int telno;
};

int main()
{
    
    record lptelDir[10];
    // Initialize table
    for (int i = 0; i < 10; i++)
    {
        strcpy(lptelDir[i].name, "empty");
        lptelDir[i].telno = -1;
    }

    int n;
    cout << "How Many Records? ";
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        char Tempname[10];
        int TempNo;

        cout << "\nEnter Client Name: ";
        cin >> Tempname;

        cout << "Enter Telephone No of client: ";
        cin >> TempNo;

        int Total = 0;
        for (int j = 0; Tempname[j] != '\0'; j++) 
        {
            Total += Tempname[j];
        }
        int h = Total % 10;

    
        // LINEAR PROBING
        if (strcmp(lptelDir[h].name, "empty") == 0) 
        {
            strcpy(lptelDir[h].name, Tempname);
            lptelDir[h].telno = TempNo;
        } else {
            for (int k = 1; k < 10; k++) {
                int idx = (h + k) % 10;
                if (lptelDir[idx].telno == -1) {
                    strcpy(lptelDir[idx].name, Tempname);
                    lptelDir[idx].telno = TempNo;
                    break;
                }
            }
        }
    }
    cout << "\nFor Linear Probing:\nIndex\tName\t\tTel No:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << i << "\t" << lptelDir[i].name << "\t\t" << lptelDir[i].telno << endl;
    }
    // SEARCHING in linear probing
    char searchName[10];
    char ch;
    do
    {
    cout << "\nEnter name to search: ";
    cin >> searchName;
    // Search in Linear Probing
    cout << "\nSearching in Linear Probing:\n";
    int foundLinear = 0;
    for (int i = 0; i < 10; i++) 
    {
        if (strcmp(lptelDir[i].name, searchName) == 0) 
        {
            cout << lptelDir[i].name << " is found";
            cout<< "\ntelno of given name is== " << lptelDir[i].telno;
            cout<< " \nat the index " << i << endl;
            foundLinear = 1;
        }
    }
    if (foundLinear == 0)
        cout << "this name is not found in Linear Probing\n";
    cout << "do you want to continue searching? (y/n): ";
    cin>>ch;
    } 
    while (ch=='y');
    return 0;
}
