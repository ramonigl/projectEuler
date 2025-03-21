#include <stdio.h>
#include <math.h>

#define NUM 600851475143

int main(){

    int prime = 2, isPrime = 1;
    long num = NUM;

    printf("\nnum = %ld\n", num);

    while (num % prime == 0) {
        num /= 2;
    }

    for (prime = 3; prime < sqrt(num); prime+=2){
        for (int i = 3; i < prime; i+=2) {
            if (prime % i == 0) {
                isPrime = 0;
                break;
            }
        }
        while (isPrime && (num % prime == 0)) {
            num = num / prime;
        }

        isPrime = 1;
    }
    if (num > 1)
        prime = num;

    printf("largest prime = %d\n\n", prime);

    return 0;
}
