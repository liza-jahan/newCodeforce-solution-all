
#include<iostream>
using namespace std;
int main()
{
  int a[100],t,temp,x,y,z,sum=0,b,c,ged,i;
  cin>>t;
  while(t--)

  {
    cin>>a[100];
    //a[100] = temp;
     for(i=a[100];i>=a[100];i++){// a[100] = temp;

  while(a[i]!=0)
    {
      c =a[i]%10;
      sum = sum + c;

      a[i] = a[i]/10;
         }
   ged = a[i]/sum;
   if(ged==3)
    //i++;
 //cout<<a;
break;
 cout<<a[i];
  }
 //cout<<a;
  }
  return 0;
}

//}
