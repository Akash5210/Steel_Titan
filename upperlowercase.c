#include<stdio.h>

main()
{
   char a;
   int b;
   printf("Enter the character to check it is upper, lower case or digit :\n");
   scanf("%c%d",&a,&b);

   if((a>='A' && a<='Z') ||(a>='a' && a<='z'))
    {
       if(a>='A' && a<='Z')
            printf("Upper case");
   else
    printf("Lower case");
    }
    else
        printf("digit");


}
