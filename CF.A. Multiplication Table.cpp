#include<iostream>
using namespace std;
int main()
{
 long long int a,b,c,d,n=0,i;
 cin>>a>>b;

   for(i=1;i<a;i++)
   {
       if(b%i==0 && b/i<=a )
       {
           n++;
        }

       }
       cout<<n<<endl;


   return 0;
}
