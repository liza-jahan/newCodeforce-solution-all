#include<iostream>
using namespace std;
int main()
{
  long long int a,b,y,c,d,sum=0,x,n,z,m,l;
 cin>>a;
 {

  b = a/100;
  x=a%100;
  c=x/20;
  y = x%20;
  d = y /10;
  z= y%10;
   n= z/5;
   m= z%5;
   l=m/1;

 }
  sum = b+c+d+n+l;


   cout<<sum<<"\n";
return 0;

}
