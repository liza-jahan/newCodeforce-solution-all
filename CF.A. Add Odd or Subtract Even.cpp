#include<iostream>
using namespace std;
int main()
{
  int t,n,a,b,c;
  cin>>t;
  while(t--)
   {
   cin>>a>>b;
   if(a==b)
       {
          cout<<"0"<<"\n";
       }
     else if(a>b && (a-b)%2==0)

       {
           cout<<"1"<<"\n";
       }
     else if (b>a && (b-a)%2!=0)
     {
         cout<<"1"<<"\n";
     }
     else
     {
         cout<<"2"<<"\n";
     }




   }







}
