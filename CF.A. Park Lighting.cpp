
#include<iostream>
using namespace std;
int main()
{
 int t,n,m,sum,add;
 cin>>t;
 while(t--)
   {
    cin>>n>>m;
    add =n*m;
    if(add%2==0)
    {
        sum = add/2;
    }

   else
   {
       sum = (add/2)+1;
   }

       cout<<sum<<"\n";
   }




}
