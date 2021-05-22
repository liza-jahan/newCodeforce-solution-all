#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
 {
     long long int b,d,sum=0;
  cin>>b;

  if(b%2!=0)
    {
        cout<<"YES"<<endl;
        goto p;
    }
   else if(b%2==0)
   {  while(1)
       { b/=2;
           if(b%2!=0)
           { if(b>1)
           {sum =1;

           break;}
           else
                break;
           }

       }
   }
   if(sum==1)
     {
         cout<<"YES"<<endl;
     }
    else
    {
        cout<<"NO"<<endl;
    }
  p:
     cout<<"";





 }
    return 0;
}
