#include<iostream>
using namespace std;
int main()
{
 int a,t,b[1001],i;
 cin>>t;
 while(t--)

 {
     int n= 0,x=0,sum=0;
   cin>>a;
   for(i=0;i<a;i++)
    {
        cin>>b[i];

   if(b[i]==2)
    {
        n++;
    }
   else
    {
        x++;
    }
    sum= sum+b[i];
 }
    if(sum%2!=0)
    {
        cout<<"NO"<<endl;
        continue;
    }

       if((n%2!=0)&& x==0)
      {
          cout<<"NO"<<endl;
          continue;
      }

        cout<<"YES"<<endl;
 }
return 0;

}
