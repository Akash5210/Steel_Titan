#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("To Check leap year or not\n");
    scanf("%d",&x);
    if(x%4==0)
        printf("Leap year");
    else
        printf("Not a leap year");

}
