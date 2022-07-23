#include<stdio.h>
int main()
{
    int a=0, b=1,c,n,i;
    printf("\n\nEnter the position you want to check\n\n");
    scanf("%d",&n);
    if (n==0) printf("\n\nPlease enter a valid position\n\n");
    if (n==1) printf("\n\nThe term at the position %d is %d\n\n", n,a);
    if (n==2) printf("\n\nThe term at the position %d is %d\n\n", n,b);
    if (n>2)
    {
        for(i=3;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
      printf("\n\nThe term at the position %d is %d\n\n", n,c);
    }
    return 0;
}
