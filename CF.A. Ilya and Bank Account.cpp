#include<iostream>
using namespace std;
int main()
{
 int a,sum,b,x,y;

  cin>>a;
  if(a<0)
{
 b = a/10;
 sum = (a/100)*10+(a%10);
 x = max(b,sum);
 cout<<x;

}
else
{
    cout<<a;
}

return 0;

}
