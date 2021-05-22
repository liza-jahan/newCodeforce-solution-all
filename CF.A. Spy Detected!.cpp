#include<iostream>
using namespace std;
int main()
{
 int  t,x,d,sum,i;
  cin>>t;
  while(t--)
  {
      int c,m;
      int a[101];
  cin>>c;
  for(i=0;i<c;i++)
     {
         cin>>a[i];
     }
     //m=a[i];
    for(i=0;i<c;i++)
    {
      if(a[i]!=a[i+1])
       {
           //break;
          cout<<i+1<<endl;
          //continue;
         // break;
         //return 0;
       }
    else{
        continue;
    }

       }
 }
cout<<"\n";
return 0;
}
