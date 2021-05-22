#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,k,t;
    //a= a%10;
    cin>>t;
    while(t--)
    {

      cin>>a;
       c= a%10;
       int n=0;
      while (a>0)
       {
        a = a/10;
        n++;
        }
      if(n==1)
        {
            cout<<((c*10)-10)+1<<endl;
        }
      else if(n==2)
        {
            cout<<((c*10)-10)+3<<endl;
        }
      else if(n==3)
        {
            cout<<((c*10)-10)+6<<endl;
        }
       else if(n==4)
       {
           cout<<((c*10)-10)+10<<endl;
       }
    }

 return 0;

}
