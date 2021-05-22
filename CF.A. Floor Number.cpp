#include<iostream>
using namespace std;
int main()
{
 int t,n,x,a,b,c;
 cin>>t;
 while(t--)
  {
  cin>>n>>x;
  b = n-2;
  if(n==1 || n==2)
    {
        cout<<"1"<<"\n";
    }
  else if(b%x==0)
  {
   c = (b/x)+1;

    cout<<c<<"\n";
  }
  else if(b%x !=0)
    {
     c = (b/x)+2;

      cout<<c<<"\n";

    }

  }

 return 0;
}
