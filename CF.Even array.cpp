
#include<iostream>
using namespace std;
int main()
{
   int b[100],i,t,n;

   cin>>t;
   while(t--)
   {
       cin>>n;
       int a[100];
       int x=0,s=0;
       for(i=0;i<n;i++)
       {
           cin>>a[i];}
    for(i=0;i<n;i=i+2)
    {
           if(a[i]%2!=0)
           {
               x++;}}

               for(i=1;i<n;i=i+2)
    {
           if(a[i]%2==0)
           {
               s++;
           }
       }
      if(x==s)
       {
           cout<<x<<"\n";
       }

      else{
          cout<<"-1"<<"\n";
      }

       }
        return 0;


}
