#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int s,n,c=0;
 pair<int ,int>x[1000];
 int i;
 while(cin>>s>>n)
{
 for( i=0;i<n;i++)
  {
   c=1;
   cin>>x[i].first >>x[i].second;}
   sort(x,x+n);
 for( i=0;i<n;i++)
 {

   if(s>x[i].first)
   {
    s = s+x[i].second;

   }

   else
   {
       c=0;
       break;
   }
}
if(c!=0)
{
    cout<<"YES" ;
}
else{
    cout<<" NO" ;
}


}
return 0;

}
