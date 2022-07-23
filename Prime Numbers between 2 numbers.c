#include<stdio.h>
int main()
{
    int a,b,c,i,n,m;
    printf("\n\nEnter the starting range\n\n");
    scanf("%d",&n);
    printf("\n\nEnter the range ending\n\n");
    scanf("%d",&m);

    for(i=n;i<=m;i++)
    {
        a=i;

        for(b=2;b<a;b++)
        {

            c=a%b;

            if(c==0)
            {

                b=a;

            }
        }
    if(c!=0)printf("\n%d\n",a);
    }
}
