// codeforces 476a Dreamoon and Stairs
#include <stdio.h>
#include <math.h>

int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    if (m > n) {
        printf("-1\n");
        return 0;
    }

    int min_moves = (n + 1) / 2;
    int ans = ((min_moves + m - 1) / m) * m;

    printf("%d\n", ans);

    return 0;
}