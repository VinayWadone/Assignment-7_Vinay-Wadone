#include<stdio.h>
int main()
{
int a,b,c,i,j,d;

for(i=100;i<=1000;i++)
   {
    d=0;j=0;
    a=i;
    //printf("\ni= %d\n",a);
    for(d=1;b<0;d++)
    {

        b=a/10;
        c=a%10;
        j=c*c*c+j;
        a=b;

    }
    if(j==i)printf("%d",j);
}

return 0;
}

/*//printf("\n\nEnter a number\n\n");
//scanf("%d",&n);
//j=n;
//a=n/10;c=0;

for(j=11;j<=1000;j++)
{
    c=0;
    n=j;
    for(i=1;a>0;i++)
    {
    a=n/10;
    b=n%10;
    c=b*b*b+c;
    n=a;
    if(c==j)printf("\n%d\n",j);
    }
}*/
