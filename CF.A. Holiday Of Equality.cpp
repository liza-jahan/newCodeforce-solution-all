#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

int a[102],t,i,sum=0,b,c,max;

cin>>t;
for(i=0;i<t;i++)
{
  cin>>a[i];
}

sort(a,a+t);
 //max=a[t-1];
for(i=0;i<t;i++)
{
 b = (a[t-1]-a[i]);
  sum = sum+b;
}

cout<<sum<<endl;

return 0;
}
