#include<iostream>
using namespace std;
int main()
{ int t;
 long long int a,b,c,d,n;
 cin>>t;
 while(t--)
   {
   cin>>a>>b>>c;
   n =1;
   while(a>0 && (a%2==0))
    {

     n = n*2;
     a = a/2;
        }

   while(b>0 &&(b%2==0))
   {
    n= n*2;
    b= b/2;

   }
   if(n>=c)
    {
        cout<<"YES"<<"\n";
    }
   else{
    cout<<"NO"<<"\n";
   }

   }


}
