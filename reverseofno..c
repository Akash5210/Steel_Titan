#include<stdio.h>

void main()
 {
     int t,i,a,r=0;
     scanf("%d",&t);

while(t--)
    {
       scanf("\n%d",&a);
       while(a!=0)
       {

           r=r*10;
           r=r+a%10;
           a=a/10;
       }
        printf("%d\n",r);
        r=0;
    }
 return(0);

 }
