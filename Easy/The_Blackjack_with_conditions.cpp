#include <iostream>
using namespace std;

int main()
{
    int a,b;
    
    cin>>a>>b;
    
    if(a+b>21)
    {
      if(a==11)
      {
        cout<<1+b;
      }
      else if(b==11)
      {
        cout<<a+1;
      }
      else
      {
        cout<<0;
      }
    }
    else
    {
      cout<<a+b;
    }
}
