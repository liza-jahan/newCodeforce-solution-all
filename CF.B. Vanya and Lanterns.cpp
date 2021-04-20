#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b,i,x[1000],c=0;
  cin>>a>>b;
  for(i=0;i<a;i++)
  {

     cin>>x[i];
  }
 sort(x,x+a) ;
   for(i=0;i<a-1;i++)
   {
     if(x[i+1]-x[i]>c)
      {
          c = x[i+1]-x[i];
      }
   }
   double d= x[0] ;
   double sum = (double)c/2;
   double add = max(d,sum);
   double ans = b-x[i];
   double div = max(add,ans);

   printf("%.9lf\n",div);

return 0;

}
