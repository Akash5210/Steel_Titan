#include<stdio.h>
#include<conio.h>

main()
{
    int i,n,s=1;
    printf("\t\tWrite a program to calculate product of first N natural numbers\n");
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf("%d",s);

}
