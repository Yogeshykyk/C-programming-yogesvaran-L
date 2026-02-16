#include<stdio.h>
int main()
{
    int a,i=1,b=1;
    printf("enter factorial:");
    scanf("%d",&a);
  while(a>0)
   {
     b=b*i;
     i++;
     a--;
   }
    printf("%d \n",b);
   
}