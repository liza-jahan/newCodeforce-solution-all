#include<iostream>
using namespace std;
int main()
{
int a,b[100],i,n=0;
cin>>a;
for(i=1;i<=a;i++)

{
    cin>>b[i];
}
for(i=1;i<=b[i];i++)
{
    if(b[i]%i==0)
    {
        n++;
    }

if(n==a)
{
    cout<<"YES\n";

}
else{
    cout<<"NO\n";
}
}
return 0;
}
