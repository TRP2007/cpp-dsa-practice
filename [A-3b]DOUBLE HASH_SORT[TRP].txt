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
    record hptelDir[10];
    // Initialize all
    for (int i = 0; i < 10; i++) 
    {
        strcpy(hptelDir[i].name, "empty");
        hptelDir[i].telno = -1;
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
        for (int j = 0; Tempname[j] != '\0'; j++) {
            Total += Tempname[j];
        }
        int h = Total % 10;
        // DOUBLE HASHING
        if (strcmp(hptelDir[h].name, "empty") == 0) 
        {
            strcpy(hptelDir[h].name, Tempname);
            hptelDir[h].telno = TempNo;
        } 
        else
        {
            int step = 7 - (Total % 7);
            int idx = h;
            int tries = 0;

            while (tries < 10) {
                idx = (idx + step) % 10;
                if (strcmp(hptelDir[idx].name, "empty") == 0) {
                    strcpy(hptelDir[idx].name, Tempname);
                    hptelDir[idx].telno = TempNo;
                    break;
                }
                tries++;
            }
        }
    }
    // Display OF DOUBLE HASHING TABLE
    cout << "\nFor Double Hashing:\nIndex\tName\t\tTel No:\n";
    for (int i = 0; i < 10; i++) 
    {
        cout << i << "\t" << hptelDir[i].name << "\t\t" << hptelDir[i].telno << endl;
    }
    // SEARCHING in all tables
    char searchName[10];
    char ch;
    do
    {
    cout << "\nEnter name to search: ";
    cin >> searchName;
    // Search in Double Hashing
    cout << "\nSearching in Double Hashing:\n";
    int foundDouble = 0;
    for (int i = 0; i < 10; i++) 
    {
        if (strcmp(hptelDir[i].name, searchName) == 0) 
        {
            cout << hptelDir[i].name << " is found";
            cout<< "\ntelno of given name is== " << hptelDir[i].telno;
            cout<< " \nat the index " << i << endl;
            foundDouble = 1;
        }
    }
    if (foundDouble == 0)
        cout << "  this name is not found in Double Hashing\n";
    
    cout << "do you want to continue searching? (y/n): ";
    cin>>ch;
   } 
    while (ch=='y');
return 0;
}
