#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int arr1[100],arr2[100],i,j,temp,N,n,X,rem;
    
    cin>>N;
    cin>>X;
    
    rem = N % 2;
    
    if(rem == 0)
    {
      n = N / 2;
      
      for(i=0;i<n;i++)
      {
        arr1[i] = i;
      }
      
      temp = n;
      for(j=0;j<n;j++)
      {
        arr2[j] = temp;
        temp++;
      }
      
      if(X<n)
        cout<<arr2[X];
      else
        cout<<arr1[X-n];
      
    }
}