/******************************************************************************
 print number (n-1)
using recursion
*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;
void f(int i,int n)// i tells us from where to start
{
	if(i<1)
		return;
	cout<< i << endl;
	f(i-1,n);
}
int main()
{
	int n;
	cin>>n;
	f(n,n);
	return 0;
}