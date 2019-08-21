#include<stdio.h>

void main()
{
    int n,m=0,a,i;
    printf("Enter the binary no:");
    scanf("%d",&n);
    for(i=0;n!=0;i++)
        {
        a=n%10;
        m=m+a*pow(2,i);
        n=n/10;
        }


            printf("%d",m);



    return 0;
}
