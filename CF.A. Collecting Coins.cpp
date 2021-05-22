#include<iostream>
using namespace std;
int main()
{
  int a,b,c,d,t,n, sum=0;
  cin>>t;
  while(t--)
 {
  cin>>a>>b>>c>>n;

  sum = a+b+c+n;
 if(sum%3==0)
   {
       cout<<"YES"<<"\n";
   }
  else
  {
      cout<<"NO"<<"\n";
  }


 }



}
