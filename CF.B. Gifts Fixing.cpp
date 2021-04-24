
#include<iostream>
//#include
using namespace std;

int main()
{ int a[55],b[55];
int t,i,x;

  cin>>t;
  while(t--)
  {
   cin>>x;
   int sum = 0x3f3f3f3f,add= 0x3f3f3f3f;
   long long int y=0;


   for(i=1;i<=x;i++)
  {
   cin>>a[i];
     sum = min(sum,a[i]) ;
  }
cout<<sum;
  }

}
