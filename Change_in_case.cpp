#include <cctype>

#include <iostream>

#include <cstring>

#include <cstdio>

using namespace std;

int main()

{

    int N,x,y;

    string str;

    

    cin>>N;

    cin>>str;

    cin>>x>>y;

    for (int i=0; i<N; i++)

    {

      if(i==x || i==y)

      {

        if(isupper(str[i]))

        {

          putchar(tolower(str[i]));

        }

        else if(islower(str[i]))

        {

          putchar(toupper(str[i]));

        }

      }

      else

      {

        putchar(str[i]);

      }

    }

     retrun 0;

}
