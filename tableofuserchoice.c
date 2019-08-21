#include<stdio.h>
#include<conio.h>

main()
{
    int i,n;
    printf("\t\tWrite a program to print table of users choice\n");
    printf("Enter the no. which you want to find the table:");
    scanf("%d",&n);


    for(i=1;i<=10;i++)
            printf("%d\n",i*n);

}
