#include<iostream>
#include<string>
using namespace std;
int main()
{
   int t,sum =0;
   cin>>t;

 while(t--)
   //for(int i=0;i<t;i++)
{char  a[20];

    cin>>a;


  if(a[0]=='T')
    {
        sum +=4;
    }
    else if(a[0]=='C')
    {
        sum +=6;
    }
    else if(a[0]=='O')
    {
        sum += 8;
    }
   else if(a[0]=='D')
    {
        sum += 12;
    }

    else if(a[0]=='I')
    {
        sum = sum+20;
           }
  }
    cout<<sum;

}
