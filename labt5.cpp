#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[20] = {1,4,6,3,6,9,1};
    int n=7;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                n--;
                for(int x=j; x<n; x++){
                    arr[x]=arr[x+1];
                }
            }
        }
    cout<<arr[i]<<" ";
    }

    getch();
}
