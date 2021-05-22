#include<iostream>
using namespace std;
int main()
{
  int a,b=0,c;
  cin>>a;
  while(a !=0)
  {

      b = b+ a%2;
      a = a/2;

  }

   cout<<b;



}
