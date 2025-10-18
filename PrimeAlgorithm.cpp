#include <stdio.h>
#include <math.h>  // Needed for sqrt()

int main() {
    int n, i, isPrime;

    printf("Prime numbers from 1 to 100 are:\n");

    for (n = 2; n <= 100; n++) {
        isPrime = 1;  // Assume n is prime

        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0;  // Not prime
                break;
            }
        }

        if (isPrime)
            printf("%d ", n);
    }

    printf("\n");
    return 0;
}
