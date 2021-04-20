#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int a[101],b,c,x[101],i,ans,m=0;
  cin>>b>>c;
  for(i=0;i<c;i++)
  {
    cin>>a[i] ;
  }

  sort(a,a+c);
  m = a[c-1]-a[0];
   for(i=b;i<=c;i++)
    {
        ans = a[i-1]-a[i-b];
        ans = abs(ans);
        m=min (ans,m);
    }
    cout<<m<<"\n";

return 0;

}
