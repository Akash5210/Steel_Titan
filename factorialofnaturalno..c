#include<stdio.h>
#include<conio.h>

main()
{
    int i,n,s=1;
    printf("\t\tWrite a program to calculate factorial of a number\n");
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n>=0)
{

   for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf("%d",s);
}
    else
        printf("Error ...enter positive value");

}
