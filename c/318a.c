// codeforces 318A - Even Odds
#include <stdio.h>

int main() {

    long long n, k, i = 0, j = 0;
    scanf("%lld %lld", &n, &k);

 /* long long a[n];
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            a[j++] = i;
        }
    }
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            a[j++] = i;
        }
    }

    printf("%lld\n", a[k - 1]); // Print the k-th number in the sequence */

    long long odd_count = (n + 1) / 2; // Count of odd numbers up to n

    if (k <= odd_count) {
        // If k is within the count of odd numbers, calculate the k-th odd number
        printf("%lld\n", 2 * k - 1);
    } else {
        // If k is greater than the count of odd numbers, calculate the (k - odd_count)-th even number
        printf("%lld\n", 2 * (k - odd_count));
    }
    
    return 0;
}