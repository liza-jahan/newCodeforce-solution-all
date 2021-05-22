#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,c,d,ans=0,i,len;
 char s[1001];
    cin>>a>>b>>c>>d;
    {
     cin>>s;
     ans =0;
    len = strlen(s);
    for(i=0;i<len;i++)
    {
     if(s[i]=='1')
        ans +=a;
      else if(s[i]=='2')
         ans +=b;
    else if(s[i]=='3')
           ans +=c;

    else if(s[i]=='4')

        ans +=d;

         }
      cout<<ans;


}

}
