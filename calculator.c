#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("operation: \n1)add\n2)sub\n3)mult\n4)divi\n5)rem\n");
    printf("operation=");
    scanf("%d",&a);
    printf("enter firts value:");
    scanf("%d",&b);
    printf("enter second value:");
    scanf("%d",&c);
    if(a=1)
    {
        printf("answer=%d",b+c);
    }
    else if(a=2)
    {
        printf("answer=%d",b-c);
    }
    else if(a=3)
     {
        printf("answer=%d",b*c);
    }
     else if(a=4)
      {
        printf("answer=%d",b/c);
    }
    else if(a=5)
      {
        printf("answer=%d",b%c);
    }
    
   
    
}