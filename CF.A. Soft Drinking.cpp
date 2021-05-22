#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,l,c,d,p,nl,np,sum,sum2,sum3,m,a;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    sum =(k*l/nl)/n;
    sum2= (c*d)/n;
    sum3=(p/np)/n;

    m=min(sum,sum2);
    a =min(m,sum3);

    cout<<a;

}
