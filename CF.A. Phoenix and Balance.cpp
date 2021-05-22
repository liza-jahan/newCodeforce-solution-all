
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{  int a,t,i,x;
    cin>>t;
    while(t--)

    {
     cin>>a;
     long long int sum1=0,sum2=0;
     for(i=1;i<(a/2);i++)
      {
          sum1 = sum1 + pow(2,i);
      }
     sum1 = sum1 + pow(2,a);
      for(i=(a/2);i<a;i++)
       {
           sum2 = sum2+ pow(2,i);
       }

     x = abs(sum1-sum2);
        cout<<x;
        }
}
