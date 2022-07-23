//Co-prime numbers are pairs of numbers that do not have any common factor other than 1
//https://www.google.com/search?q=co+prime+numbers&rlz=1C1GCEB_enIN858IN859&sxsrf=ALiCzsaE1uuoluYAceaGe6Y1mLfjRyBARw%3A1658159292113&ei=vIDVYr6qBonWkPIP38uy-A8&ved=0ahUKEwi--Njc5IL5AhUJK0QIHd-lDP8Q4dUDCA8&uact=5&oq=co+prime+numbers&gs_lcp=Cgdnd3Mtd2l6EAMyBAgAEEMyCwgAEIAEELEDEIMBMgUIABCABDIFCAAQgAQyBQgAEIAEMgUIABCABDIFCAAQgAQyBQgAEIAEMgUIABCABDIFCAAQgAQ6BAgjECc6BQgAEJECOgsIABCxAxCDARCRAjoKCAAQsQMQgwEQQzoHCAAQsQMQQzoICAAQgAQQsQM6EAgAEIAEEIcCELEDEIMBEBQ6BggAEAoQQ0oECEEYAEoECEYYAFAAWO4lYP1BaABwAXgAgAGCA4gB6CqSAQQzLTE2mAEAoAEBwAEB&sclient=gws-wiz
#include<stdio.h>
int main()
{
    int a,b,c,d,i;
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
    d=a;
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
    d=b;
    }
    if(d==1)printf("\n\nThe given two numbers are Co-prime numbers\n\n");
    else printf("\n\nThe given two numbers are NOT Co-prime numbers\n\n");
    return 0;

}
