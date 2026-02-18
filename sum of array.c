#include <stdio.h>

int main() {
    int n, i, sum = 0,j;
    printf("enter size:");
    scanf("%d", &n);
    
    int arr[n];
    
    for(i = 0; i < n; i++) {
        j=i+1;
        printf("enter %d element:",j);
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    printf("sum of array=%d ", sum);
    
    return 0;
}
