#include<iostream>
using namespace std;
int main()
{
  int i,t;
  long long int a,b,sum=0,c;
  cin>>t;
  for(i=0;i<t;i++)
   {

      cin>>a>>b;
      if(a%b==0)
      {
          cout<<"0"<<"\n";
      }
      else
      {
        c= a%b;
        sum = b-c;
       cout<<sum<<"\n";
      }

   }
return 0;

}
