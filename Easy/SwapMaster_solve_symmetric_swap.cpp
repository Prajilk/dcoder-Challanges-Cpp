#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int arr[100],N,rem,large=0,sum=0;
    
    cin>>N;
    for(int i=0; i<N; i++)
    {
      cin>>arr[i];
    }
    
    for(int i=N-1;i>=0;i--)
    {
      cout<<arr[i]<<" ";
    }
}