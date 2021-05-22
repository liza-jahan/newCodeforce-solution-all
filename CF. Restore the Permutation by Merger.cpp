#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 int a,i,t,c,d;
int sun[55],b[105],can=0;
 cin>>t;
 while(t--)
    {
       //long long int ans[a+1],b;
    cin>>a;
    memset(sun,0,sizeof(sun));
    for(i=1;i<=2*a;i++)
     {
        cin>> b[i];
     }

for(i=1;i<=2*a;i++)
     {
        if(sun[b[i]-1]==0)
      {
       sun[b[i]-1]=1;
    if(can !=0)
    {
        cout<<b[i]<<" ";
    }
 else
        {

         cout<<b[i]<<" ";
        }
     can++;
      }
      if(can==a)
      {

    cout<<"\n";
    break;
        }
    }

    }
return 0;
}



