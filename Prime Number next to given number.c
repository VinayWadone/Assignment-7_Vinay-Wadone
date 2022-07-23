#include<stdio.h>
int main()
{
    int a,b,c,i,n,m;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&n);


    n=n+1;

    for(i=n;i<=n+100;i++)
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
        if(c!=0)
        {
            printf("\n%d\n",a);
            //i=n+101; --> This also does work
            break;
        }
 }
}
