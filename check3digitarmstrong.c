#include<stdio.h>
#include<math.h>


void main()
{
    int r,n,s=0,i,flag;

    printf("Enter 3 digit no.");
    scanf("%d",&n);
    flag=n;
    while(n!=0)
    {
        r=n%10;
        s=s+pow(r,3);
        n=n/10;
    }
    n=flag;

    if(s==n)
    printf("Armstrong no.");
    else
        printf("Not Armstrong no.");

    return 0;
}
