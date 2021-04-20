#include<iostream>
#include<string>
using namespace std;
int main()
{
 int i;
 string s1;
 cin>>s1;
 for(i=0;i<s1.size();i++)
    {
      if(s1[i]=='W'&& s1[i+1]=='U' && s1[i+2]=='B')
        {
            i=i+2;
            cout<< " ";

        }
        else
        {

            cout<<s1[i];
        }


    }

return 0;
}
