#include<iostream>
using namespace std;
int main()
{
 int i,j,a,b,t;

  cin>>t;
  while(t--)
  {
   cin>>b;
   if(b%4!=0)
   {
       cout<<"NO"<<endl;
   }
else{

    cout<<"YES"<<endl;
int sum=0,sum1=0;
    for(i=0;i<b/2;i++)
    {
       cout<<2*(i+1) <<" ";
       sum += 2*(i+1);
       }
       for(i=0;i<((b/2)-1);i++)
        {
          cout<<2*(i+1)-1 <<" ";
          sum1 =sum1+ 2*(i+1)-1;

        }


    cout<<sum-sum1<<endl;
}
  }
 // cout<<"\n";



  return 0;

}
