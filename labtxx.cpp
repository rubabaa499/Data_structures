#include<iostream>
using namespace std;

int main()
{
    int j=0;
    string s1=" i am a student ";
    cout<<" Input value of j= ";
    cin>>j;
    for(int i=(j-1);i<(((sizeof(s1))/2));i=i+j)
    {
        int var = (int (s1[i]))+2;
        s1[i]=char(var);
    }

  for(int i=0;i<(((sizeof(s1))/2));i++)
  {
      cout<<s1[i];
  }
  }
