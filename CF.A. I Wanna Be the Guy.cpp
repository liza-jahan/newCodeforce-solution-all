#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ int a,p,q,b[250],x[200],i,cont=0;
  cin>>a>>p;
    for(i=0;i<p;i++)
    {
        cin>>b[i];
    }
    cin>>q;
   for(i=p;i<p+q;i++)
    {
     cin>>b[i];
    }
    sort(b,b+(p+q));
     for(i=0;i<p+q;i++)
  {
    if(b[i]!=b[i+1])
    {
        cont++;
    }
  }
  if(cont==a)
     {
       cout<<"I become the guy.\n";
     }
  else
        {
            cout<<"Oh, my keyboard!\n";
        }
        return 0;
}
