#include<stdio.h>
int main()
{
    int a,t,b,x,y,add,sum;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d%d",&a,&b);


        if(a>=b*2)
       {
           x=a*a;
       }

       else if(b>=a*2)
       {
           x = b*b;
      }

      else if(a>=b)
        {
         x = b*b*4;
        }


       else if(b>=a)
        {
        x = a*a*4;
       }

    printf("%d\n",x);

    }

return 0;

}
