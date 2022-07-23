#include<stdio.h>
int main()
{
int a,b,c,i,j,n;
printf("\n\nEnter a number\n\n");
scanf("%d",&n);
j=n;
a=n/10;c=0;
if(a==0)
{printf("\n\nIts not an AN\n\n");
goto *6;
}
else
for(i=1;a>0;i++)
{
a=n/10;
b=n%10;
c=b*b*b+c;
n=a;
}
if(c==j)printf("\n\nIts an AN\n\n");
else printf("\n\nIts not an AN\n\n");
6; return 0;
}
