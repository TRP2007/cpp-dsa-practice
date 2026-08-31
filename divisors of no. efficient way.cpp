#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
void printdiv(int n)
{
    vector<int> ln;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0)
        {
            ln.push_back(i);
            if((n/i)!=i)
            {
                ln.push_back(n/i);
            }
        }
    }
    sort(ln.begin(),ln.end());
    for(auto it:ln)
    {
        cout<< it <<" ";
    }
}
int main()
{
    int n ;
    cin>>n;
     printdiv(n);

    return 0;
}