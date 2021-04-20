#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int a,b[101],i,j;
 cin>>a;
 for(i=0;i<a;i++)
    {

     cin>>b[i] ;
    }
 for(j=1;j<=a;j++)
 {

    for(i=0;i<a;i++)
    {
    if(b[i]==j)
    {

     cout<<i+1<<" " ;
    }
    }}
return 0;

}
