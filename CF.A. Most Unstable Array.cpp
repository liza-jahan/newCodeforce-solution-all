
#include<iostream>
using namespace std;

 void liza(int n,int k)
 {
  if(n==1)
    {
        cout<<"0"<<"\n";
    }
   else if(n==2)
     {
         cout<<k<<"\n";
     }
    else
    {
        cout<<2*k<<"\n";
    }

 }


 int main()
 { int t,a,b,c,d;
 cin>>t;
 while (t--)
 {

   cin>>a>>b;
   liza(a,b) ;


 }

    return 0;
 }

