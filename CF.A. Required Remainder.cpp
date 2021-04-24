#include<iostream>
using namespace std;
int main()
{
    long long int t,a,b,x,y,n,sum=0;
    cin>>t;
    while(t--)
   {
    cin>>x>>y>>n;

    a=n%x;
    if(a>=y)
       {
        sum = n-(a-y);
        cout<<sum<<"\n";
       }
      else
      {

          sum = n-(x+a-y);
          cout<<sum<<"\n";
      }



   }

return 0;
}
