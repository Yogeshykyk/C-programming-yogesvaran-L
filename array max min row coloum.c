#include<stdio.h>
int main()
{
    int a,x,y,z=0,max;
    printf("-[1]MAX IN ROW-\n-[2]MAX IN COLOUM-\n-[3]MIN IN ROW-\n-[4]MIN IN COLOUM-\n SELECT THE PERFOMANCE:");
    scanf("%d",&a);
    int m,n;
    printf("Enter array Row size:");
    scanf("%d",&m);
    printf("Enter array coloum size:");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          printf("Enter array %d%d element:",i,j);
          scanf("%d",&arr[i][j]);
        }
    }
    if(a==1)
    {
    printf("-MAX IN ROW-\n");
    for(x=0;x<m;x++)
    {
        max=arr[z][0];
        for(y=0;y<n;y++)
        {
            if(max<arr[x][y])
            {
                max=arr[x][y];
            }
        }
        z=z+1;
        printf("\nMAX IN [%d]ROW=%d\n",x+1,max);
    }
    }
    else if(a==2)
    {
    printf("-MAX IN COLOUM-\n");
    for(x=0;x<m;x++)
    {
        max=arr[0][z];
        for(y=0;y<n;y++)
        {
            if(max<arr[y][x])
            {
                max=arr[y][x];
            }
        }
        z=z+1;
        printf("\nMAX IN [%d]COLOUM=%d\n",x+1,max);
    }
    }
    else if(a==3)
    {
    printf("-MIN IN ROW-\n");
    for(x=0;x<m;x++)
    {
        max=arr[z][0];
        for(y=0;y<n;y++)
        {
            if(max>arr[x][y])
            {
                max=arr[x][y];
            }
        }
        z=z+1;
        printf("\nMIN IN [%d]ROW=%d\n",x+1,max);
        
    }}
    else if(a==4)
    {
    printf("-MIN IN COLOUM-\n");
    for(x=0;x<m;x++)
    {
        max=arr[0][z];
        for(y=0;y<n;y++)
        {
            if(max>arr[y][x])
            {
                max=arr[y][x];
            }
        }
        z=z+1;
        printf("\nMIN IN [%d]COLOUM=%d\n",x+1,max);
        
    }}
}
       
    