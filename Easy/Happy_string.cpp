#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    char alpha;
    char arr[27];
    int i=26,N;
    
    cin>>N;
    
    for(alpha='z';alpha>='a';alpha--)
    {
      while(i>=1)
      {
        arr[i]=alpha;
        break;
      }
      i--;
    }
    for(int i=N;i>=1;i--)
    {
      cout<<arr[i];
    }
}