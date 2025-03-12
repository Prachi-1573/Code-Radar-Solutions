#include<stdio.h>
int main() {
    int x, isPrime = 1;  // Assume number is prime initially
    scanf("%d", &x);

    if (x < 2) {
        printf("Not Prime\n");
        return 0;
    }

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            printf("Not Prime\n");
            return 0;  // Exit as soon as we find a divisor
        }
    }

    printf("Prime\n");
    return 0;
}