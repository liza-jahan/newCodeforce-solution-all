#include<iostream>
using namespace std;
int main()
{
  int i,a[101],k,n,count=0;
  cin>>k>>n;
  for(i=0;i<k;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<k;i++)
    {
        if(5-a[i]>=n)
        {
            count++;
        }

    }
    cout<<count/3<<endl;


return 0;
}
