#include <iostream>
using namespace std;

int main()
{
    int m,n,p;
    
    cin>>m>>n>>p;
    
    if(m<n)
    {
      if(m<p)
      {
        cout<<m<<" ";
        if(n<p)
        {
          cout<<n<<" ";
          cout<<p<<" ";
        }
        else
        {
          cout<<p<<" ";
          cout<<n<<" ";
        }
      }
      else
      {
        cout<<p<<" ";
        cout<<m<<" ";
        cout<<n<<" ";
      }
    }
    else
    {
      if(m<p)
      {
        cout<<n<<" ";
        cout<<m<<" ";
        cout<<p<<" ";
      }
      else if(n<p)
      {
        cout<<n<<" ";
        cout<<p<<" ";
        cout<<m<<" ";
      }
      else
      {
        cout<<p<<" ";
        cout<<n<<" ";
        cout<<m<<" ";
      }
      
    }
}
