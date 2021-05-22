#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,i,ans=1001,k,j,x[52],y,m;
  cin >>t;
  while(t--)
  {
   //int ans=1001;

       cin>>k;
     for(i=0;i<k;i++)
        {
           cin>>x[i];
           }
     sort(x,x+k);
   for(i=0;i<k-1;i++)

         {

           ans = min (ans,(x[i+1]-x[i]));
         }

cout<<ans<<endl;

  }
  return 0;
}
