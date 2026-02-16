#include<stdio.h>
int main()
{
    int i,j;
    char str[60];
    printf("enter the word:");
    scanf("%s",&str);
    j=sizeof(str);
   for(i=0;i<60;i++)
    {
        if(str[i]=='a')
            {
            printf("A is vowels in %s \n",str);
           continue;
               }
        else if(str[i]=='e')
           {
      printf("E is vowels in %s \n",str);
       continue;
             }
    else if(str[i]=='i')
            {
      printf("I is vowels in %s \n",str);
       continue;
              }
        else if(str[i]=='o')
              {
      printf("O is vowels in %s \n",str);
       continue;
                }
    else if(str[i]=='u')
                 {
      printf("U is vowels in %s \n",str);
       continue;
                 }
  
    
    }
    
        
        
        
    
}