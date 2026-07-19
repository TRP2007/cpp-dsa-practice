#include<bits/stdc++.h>
using namespace std;
/*take the day no and print the corresponding day for 1 print monday,for 2 print tuesday and so on for 7 print sunday...*/
//use of switch statement
int main()
{
int day;
cin>>day;
switch(day)
{
 case 1://here we are using one beacause user input will be an integer..if it is character then we can use a,b,..
    cout<<"Monday/n";
break;//break will take you out of the loop
 case 2:
    cout<<"Tuesday/n";
break;
 case 3:
    cout<<"Wednesday/n";
break;
 case 4:
    cout<<"Thursday/n";
break;
 case 5:
    cout<<"Friday/n";
break;
 case 6:
    cout<<"Saturday/n";
break;
 case 7:
    cout<<"sunday/n";
break;
default:
    cout<<"invalid";
break;
    
}
    return 0;
}