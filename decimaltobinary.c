#include<stdio.h>

void main()
{
    int n,a[100],i;
    printf("Enter the positive no:");
    scanf("%d",&n);
    for(i=0;n!=0;i++)
        {
        a[i]=n%2;
        n=n/2;
        }

        while(i--)
        {
            printf("%d",a[i]);
        }


    return 0;
}
