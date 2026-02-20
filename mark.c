#include <stdio.h>

int main() {
    int M;
    scanf("%d", &M);

    if (M >= 90 && M <= 100)
        printf("A");
    else if (M >= 80)
        printf("B");
    else if (M >= 70)
        printf("C");
    else if (M >= 60)
        printf("D");
    else if (M >= 50)
        printf("E");
    else
        printf("Fail");

    return 0;
}
