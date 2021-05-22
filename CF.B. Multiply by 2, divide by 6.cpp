
#include<iostream>
using namespace std;
int main()
{
  int t,a,b,c,d;
  cin>>t;
  while(t--)
    {

    cin>>a;
    c=0;
    while(a%6==0)

    {
     a= a/6;
     c++;


    }
  while(a%3==0)
   {
     a =a/3;
     c = c+2;
   }

    if(a==1)
     {
         cout<<c<<"\n";
     }
    else{
        cout<<"-1"<<"\n";
    }


    }
    return 0;

}
