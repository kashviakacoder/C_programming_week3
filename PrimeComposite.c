#include <stdio.h>
#include <math.h>

int main() {
    int num, primeCount = 0, compositeCount = 0;

    do {
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &num);

        if (num == -1)
            break;
        if (num <= 1)
            continue;

        int isPrime = 1;
        int div = 2;

        while (div <= sqrt(num)) {
            if (num % div == 0) {
                isPrime = 0;
                break;
            }
            div++;
        }

        if (isPrime)
            primeCount++;
        else
            compositeCount++;

    } while (1);  // Infinite loop until break

    printf("\nTotal prime numbers entered: %d\n", primeCount);
    printf("Total composite numbers entered: %d\n", compositeCount);

    return 0;
}

