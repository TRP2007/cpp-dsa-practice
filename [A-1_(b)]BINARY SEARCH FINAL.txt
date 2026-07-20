
#include <iostream>
using namespace std;

int main() 
{
   int n,i,key,f;
   cout<<"Enter The Total no of Students attend the Lecture ";
   cin>>n;
   cout<<endl;
   int a[n];
   for(i=0;i<n;i++)
   {
       cout<<"Enter The Rollno : ";
       cin>>a[i];
   }
   cout<<endl;
   char ch;
   cout<<"DO you Want To Serach Roll no(y/n) ";
   cin>>ch;
   cout<<endl;
   int start,mid,end;
   while(ch=='y')
   {
       start=0;
       end=n-1;
       f=0;
       cout<<"Enter The Rollno : ";
       cin>>key;
       for(i=0;i<n;i++)
       {
           mid=(start+end)/2;
           if(a[mid]==key)
           {
               cout<<key<<" is present"<<endl;
               f=1;
               break;
            }
            else if(a[mid]>key)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            } 
       }
       if(f==0)
       {
           cout<<key<<" is absent"<<endl;
       }
       cout<<endl;
       cout<<"DO you Want To Serach another Roll no (y/n)";
       cin>>ch;
       cout<<endl;
   }
   return 0;
}

