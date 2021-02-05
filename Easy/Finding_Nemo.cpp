#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  int N, words=0;
  string str;
  
 cin>>N;/*Actually I am not using this N variable anywhere in this program.
          This is only for satisfy the sample input in the Challange*/
  
  cin.ignore();
  getline(cin, str);
  
  string word="";
  
  for(auto x : str)
  {
    if(x == ' ')
    {
      words++;
      word="";
    }
    else
    {
      word = word + x;
      if(word=="Nemo")
      {
        cout<<words+1;
        break;
      }
    }
  }
}
