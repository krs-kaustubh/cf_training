// codeforces problem 230a: T-Prime
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(long long num) {
    if (num < 2) return false;
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    scanf("%lld", &n);

    long long arr[n];
    for (long long i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    //tprimes are squares of prime numbers
    for (long long i = 0; i < n; i++) {
        long long num = arr[i];
        long long root = sqrt(num);

        if (root * root == num && isPrime(root)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}