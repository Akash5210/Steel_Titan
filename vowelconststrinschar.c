#include<stdio.h>

void main()
{
    char a[100];
    int i,vowel,constant,digit,space,spchar;
    vowel=constant=digit=space=spchar=0;
    printf("Enter the string:");

    gets(a);
    for(i=0;a[i]!=0;i++)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'
               ||a[i]=='O'||a[i]=='U')
               ++vowel;
               else if((a[i]>='a'&& a[i]<='z') || (a[i]>='A'&& a[i]<='Z'))
                ++constant;
               else if(a[i]>='0'&&a[i]<='9')
                ++digit;
               else if(a[i]==' ')
                ++space;
               else
                ++spchar;

        }
        printf("No.of vowel= %d,constant= %d,digit= %d,space= %d,spchar= %d",vowel,constant,digit,space,spchar);


    return 0;
}
