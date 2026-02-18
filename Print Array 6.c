#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n;
    
    // Read size of array
    scanf("%d", &n);
    
    int arr[n];   // Declare array of size n
    
    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Print array elements
    for(int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i < n - 1) {
            printf(" ");
        }
    }
    
    return 0;
}
