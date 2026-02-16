#include <stdio.h>

int main()
{
    int a;
    printf("enter your age:");
    scanf("%d",&a);
    if(a==18)
    {
    printf("you are now 18 ,So eligible for vote!");
    }
    else if (a<18)
    {
        printf("not Eligible for vote :( ");
        
    }
    else
   { printf("you eligible for vote :)");}
}