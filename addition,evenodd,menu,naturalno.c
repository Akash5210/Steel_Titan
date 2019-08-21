#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int x,a,b,i;
  while(2)
    {
    system ("cls");
    printf("MENU-\n");
    printf("1.Addition of two numbers\n");
    printf("2.Check even or odd number\n");
    printf("3.Natural no. upto n\n");
    printf("4.Exit\n");


        printf("Enter your choice:");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            printf("Enter two no.");
            scanf("%d%d",&a,&b);
            printf("sum is %d",a+b);
            break;
        case 2:
            printf("Enter a number:");
            scanf("%d",&a);
            if(a%2==0)
                printf("\nEven");
            else
                printf("\nOdd");
            break;
        case 3:
            printf("Enter a number:");
            scanf("%d",&a);
            for(i=1;i<=a;i++)
                printf("%d,",i);
            break;
        case 4:
            exit(0);
        default:
            printf("Enter valid number");
         }
        getch();
    }


}
