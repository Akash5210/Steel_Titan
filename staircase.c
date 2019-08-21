#include<stdio.h>
#include<conio.h>

main()
{
    int n,i;
    char x;
    printf("Enter length:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        x='x'*i;
        printf("%c\n",'x');
    }
}
