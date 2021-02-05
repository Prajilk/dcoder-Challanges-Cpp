#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int N;
    string S;
    
    cin>>N;
    cin>>S;
    
    for(int i=0;i<N;i++)
    {
      for(int j=0;j<3;j++)
      {
        cout<<S[i];
      }
    }
    
}