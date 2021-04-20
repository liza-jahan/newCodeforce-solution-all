#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
 int a,b,i,sum=0,j;
 cin>>a>>b;
 for(i=0;i<a;i++)
{if(i%2==0){
  for( j =1;j<=b;j++)
    {
        cout<<"#";
       }}

      else{
       // cout<<"#"<<j;
       sum++;
       for(j=0;j<b;j++)
       {
           if(sum%2==1 && j==b-1)
           {
               cout<<"#";
           }
           else if(sum%2==0 && j==0)
           {
               cout<<"#";
           }
           else
           {
               cout<<".";
           }
       }

      }
      cout<<"\n";




}
return 0;

}
