#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,a[100],t,r,n,k,b;
  cin>>t;
  while(t--)
 {
     cin>>b;

   for(i=2;i<10e9;i++)
    {
        r = pow(2,i)-1;
      if(b%r==0)
       {
        cout<<b/r<<"\n";
        break;
       }

    }







 }








}
