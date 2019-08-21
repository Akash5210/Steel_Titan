#include<stdio.h>
#include<conio.h>


main()
{
    int i,n;

    system ("cls");
    printf("program to print first n even natural numbers\n");
    printf("Enter the value:");
    scanf("%d",&n);
    for(i=1;(2*i)<=2*n;i++)
        printf("%d\n",2*i);

}
