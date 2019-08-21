#include<stdio.h>

void main()
{
    int n,a,b;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    while(a!=b)
    {
    if(a>b)
        a=a-b;
    else
        b=b-a;
    }
    printf("GCD is %d",a);
    return 0;
}
