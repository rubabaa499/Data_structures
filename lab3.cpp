#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

 int a;
 int z;

 cout<<"Enter the starting value"<<endl;
 cin>>a;
 cout<<"Enter the ending value"<<endl;
 cin>>z;
 for(int x=a; x<=z; x++)
    {
   if(x%2!=0)
   {
     cout<<x<<" ";
   }
}
getch();
}
