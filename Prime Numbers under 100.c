#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    printf("\n\nEnter the range more than 2\n\n");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
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
