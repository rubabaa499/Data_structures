#include<iostream>
#include<conio.h>
using namespace std;

int main()
{ int arr[10][10];
  int m,n;
 cout<<"Enter row and column number: ";
 cin>>m>>n;

 cout<<"\nEnter row and column values: "<<endl;
  for(int i=0; i<m; i++)
  {
      for(int j=0; j<n; j++)
      {
          cin>>arr[i][j];
      }
  }

  cout<<" Your matrix is:"<< endl;

    for(int i=0; i<m; i++)
  {
      for(int j=0; j<n; j++)
      {
          cout<<arr[i][j]<<" ";
      }
      cout<<endl;

}
 cout<<"\nYour transpose matrix is: "<<endl;
   for(int i=0; i<n; i++)
  {
      for(int j=0; j<m; j++)
      {
          cout<<arr[j][i]<<" ";
      }
      cout<<endl;

}
 getch();
}
