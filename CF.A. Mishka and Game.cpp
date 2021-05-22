#include<iostream>
using namespace std;
int main()

{
  int a,b,t,sum =0,add=0,x=0,y=0;
  cin>>t;
  while(t--)
  {
   cin>>a>>b;
  if(a>b)
  {
      x++;
  }
  else if(b>a)
  {
      y++;
  }
    }
if(x>y)
   {
       cout<<"Mishka";
       }
   else if(y>x)
   {
    cout<<"Chris";
   }

 else{

    cout<<"Friendship is magic!^^";
 }
return 0;
}
