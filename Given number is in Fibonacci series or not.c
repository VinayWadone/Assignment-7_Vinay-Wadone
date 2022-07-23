#include<stdio.h>
int main()
{
    int a=0, b=1,c=0,d,n,i;
    printf("\n\nEnter the position you want to check\n\n");
    scanf("%d",&n);
    if (n==0) printf("\n\nYes its there at the first position\n\n");
    if (n==1) printf("\n\nYes its there at the second & third positions\n\n");
    if (n==2) printf("\n\nYes its there at the fourth position\n\n");
    if (n>2)
    {

        for(i=3;c<n;i++)
        {
            c=a+b;
            d=n-c;
         if(d==0)printf("\n\nThe given number %d is there at %dth position in the Fib series\n\n",n,i);
            a=b;
            b=c;

        }
        //printf("\n%d\n",c);
      if(d<0)printf("\n\nThe given number %d is not a part of Fib seies\n\n",n);
    }
    return 0;
}
