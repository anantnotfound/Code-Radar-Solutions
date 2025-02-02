#include <stdio.h>
int main() {
    int A;
    scanf("%d", &A);
    if (A % 5 == 0 && A % 11 == 0) {
        printf("Divisible");
    } else {
        printf("Not Divisible");
    }
    return 0;
}