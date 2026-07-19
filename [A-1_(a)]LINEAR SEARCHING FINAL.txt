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
   cout<<"DO you Want To Serach Roll no ";
   cin>>ch;
   while(ch=='y')
   {
       cout<<"Enter The Rollno : ";
       cin>>key;
       for(i=0;i<n;i++)
       {
           f=0;
           if(a[i]==key)
           {
               cout<<key<<" is present"<<endl;
               f=1;
               break;
           }
       }
       if(f==0)
       {
           cout<<key<<" is not present "<<endl;
       }
       cout<<endl;
       cout<<"DO you Want To Serach Roll no ";
       cin>>ch;
   }
    return 0;
}
