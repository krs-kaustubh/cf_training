// codeforces problem 1352c kth not divisible by n
#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        long long n, k;
        scanf("%lld %lld", &n, &k);

        // going via block method

        // block number
        long long q = (k - 1) / (n - 1);

        // remainder in the block
        long long r = (k - 1) % (n - 1);

        // ans = block number * n + remainder + 1 (as r is 0 indexed)
        long long ans = q * n + r + 1;
        
        printf("%lld\n", ans);
    }
    return 0;
}