#include<stdio.h>

void swap(int *x,int *y);
void main()
{
  int a,b;
  printf("enter the values of a and b:");
  scanf("%d%d",&a,&b);
  swap(&a,&b);


  printf("\nEntered values are swapped: %d and %d",a,b);
}


void swap(int *x,int *y)
{
    int c;
    c=*x;
    *x=*y;
    *y=c;


}
