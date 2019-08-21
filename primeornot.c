#include<stdio.h>

void main()
{
    int d,i,n;
    printf("enter the integer:");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {printf("not prime");
        break;
        }


    }

     if(n/2+1==i)
     printf("prime");

}
