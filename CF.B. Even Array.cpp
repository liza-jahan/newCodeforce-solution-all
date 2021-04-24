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
           cin>>a[i];

           if(i%2==0 &&a[i]&1)
           {
               x++;
           }
           if(a[i]%2==0 && i&1)
           {
               s++;
           }
       }
      if(x==s)
       {
           cout<<(x+s)/2<<"\n";
       }

      else{
          cout<<"-1"<<"\n";
      }

       }
        return 0;


}
