
#include<iostream>
using namespace std;
int main()
{
  int t,a,x,z,i,j,n=0;
 // char b;
   cin>>t>>a;
   char b[101][101];
   for(j=0;j<t;j++)
   {
       for(i=0;i<a;i++)
        {
        cin>>b[j][i];
        }
   }


   for(j=0;j<t;j++)
   {

    for(i=0;i<a;i++){

  if(b[j][i]=='C'|| b[j][i]=='Y'||b[j][i]=='M')


  {
      cout<<"#Color";
      return 0;
  }
  }
  }

  cout<<"#Black&Whit";
 return 0;
}
