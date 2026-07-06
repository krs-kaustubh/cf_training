// codeforces problem 466A : Cheap Travel
#include <stdio.h>

// returns the smaller of two integers
int min(int x, int y) {
    return (x < y) ? x : y;
}

int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    int full_blocks = n / m;
    int remainder = n % m;

    // For one full m-day block: cheaper of buying m singles OR one travel card
    int block_cost = min(m * a, b);

    // For the leftover days: cheaper of buying 'remainder' singles OR one travel card
    int remainder_cost = min(remainder * a, b);

    int min_cost = full_blocks * block_cost + remainder_cost;

    printf("%d\n", min_cost);
    return 0;
}