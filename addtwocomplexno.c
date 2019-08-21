#include<stdio.h>

struct complex
{
    int real,imag;
}a,b,c;

void main()
{
    printf("for first complex no.");
    printf("\nEnter the real part:");
    scanf("%d",&a.real);
    printf("\nEnter the imaginary part:");
    scanf("%d",&a.imag);

    printf("for second complex no.");
    printf("\nEnter the real part:");
    scanf("%d",&b.real);
    printf("\nEnter the imaginary part:");
    scanf("%d",&b.imag);

    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;

    printf("\nsum =%d +%di",c.real,c.imag);
    return 0;


}
