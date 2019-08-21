#include<stdio.h>
#include<conio.h>


main()
{
    int a,b,c;
    double x;
    system ("cls");
    printf("program to find roots of a quadratic equation: \n");
    printf("Enter the value of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    x=(-b+sqrt(b*b-4*a*c))/(2*a);

    printf("%f",x);
getch();
}
