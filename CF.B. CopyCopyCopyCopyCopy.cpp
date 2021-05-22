#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,d,t,i,p, x[100050],temp;
  cin>>t;
  while(t--)
  {
      int n=0;
  cin>>a;
  for(i=1;i<=a;i++)
      {
          cin>>x[i];
      }
      //temp=x[i];
      sort(x+1,x+a+1);
    // for(i=0;i<a;i++)
    //{
      //    if(x[i]!=x[i+1])
       //   {
        //      n++;
        //  }

     // }
     cout<<unique(x+1,x+1+a)-x-1<<"\n";

     // cout<<n<<"\n";
  }
return 0;


}
