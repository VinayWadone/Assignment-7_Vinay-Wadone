//https://www.cuemath.com/numbers/hcf-of-two-numbers/
#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("\n\nEnter the first number\n\n");
    scanf("%d",&a);
    printf("\n\nEnter the second number\n\n");
    scanf("%d",&b);
    c=b%a;
    //printf("\n\n%d is the HCF\n\n",c);
    if (a<b)
    {
        for(i=1;c>0;i++)
        {
            c=b%a;
            if(c!=0)
            {
                b=a;
                a=c;
            }
            else printf("\n\n%d is the HCF\n\n",a);
        }
    }
    else
        {
        for(i=1;c>0;i++)
        {
            c=a%b;
            if(c!=0)
            {
                a=b;
                b=c;
            }
            else printf("\n\n%d is the HCF\n\n",b);
        }
    }
    return 0;

}
