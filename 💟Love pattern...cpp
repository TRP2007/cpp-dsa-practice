#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;

    // Upper part
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            if((i == 0 && (j == 1 || j == 2 || j == 4 || j == 5)) ||
               (i == 1 && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5)) ||
               (i == 2 && (j >= 0 && j <= 5)))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Lower part
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2 * n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}