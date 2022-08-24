#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
   int i,even,odd;
   even=0;
   odd=0;

{


   int z[10]= {1,3,4,7,8,9,2,0,5,6};


 for(i=0; i<10; i++)
    {
        if(z[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

cout<<"Even number "<<even<<endl;
cout<<"odd number "<<odd<<endl;


getch();

}
}


