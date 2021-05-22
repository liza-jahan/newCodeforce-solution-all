#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[1001],n,t,sum=0,sum2=0;
 cin>>n;
    for(int  i=0;i<n;i++)
    {
        cin>>a[i];
    }
int j =n-1,i=0,max,k=0;
while(i<=j)
{
  if(a[i]>=a[j])
     {
         max=a[i];
         i++;
     }

   else
 {
      max = a[j];
      j--;
  }
  if(k%2==0)

      sum= sum+max;

  else
    sum2 = sum2+max;

    k++;
}

    //if(sum>sum2)
    cout<<sum<<" "<<sum2<<endl;
    //else
        //cout<<sum2<<" "<<sum;
return 0;
}
