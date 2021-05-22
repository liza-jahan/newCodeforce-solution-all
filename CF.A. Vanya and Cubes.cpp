
#include<iostream>
using namespace std;
int main()
{
 int a=0,b=0,n,i;
 cin>>n;
 for(i=1;i<=n;i++)
 {
   b =b+i;
   n=n-b;
   if(n>=0)
    {
        a++;
    }
   else{
    break;
   }

 }
    cout<<a<<endl;
 return 0;
}
