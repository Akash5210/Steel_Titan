#include <stdio.h>

int main()
{
    int e,i,t,n,m,k,l,r;
    int c[101],p[101],z[101];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d %d %d",&n,&m,&k,&l,&r);
        for(i=0;i<n;i++)
            scanf("%d %d",&c[i],&p[i]);
        e=p[0];
        for(i=0;i<n;i++)
        {
            if(c[i]<k)
            {
                z[i]=c[i]+m;
                for(i=0;i<n;i++)
                {
                    if(z[i]>=l && z[i]<=r)
                    {

                        printf("%d\n",p[i]);
                    }
                }
            }
            else
                printf("-1\n");
        }
    }
return 0;
}
