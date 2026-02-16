#include <stdio.h>
int main()
{
 int a,b,c,d,e,f,g,h;
 printf("enter the number:");
 scanf("%d",&a);
 if(a>=100)
{ 
    b=a%10;
    c=a/10;
    d=c%10;
    printf("%d%d%d",b,d);
}
else if(a<=99)
{
    b=a%10;
    c=a/10;
    printf("%d%d",b,c);
}
}