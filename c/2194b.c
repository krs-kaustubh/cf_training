// codeforces 2194B - offshores

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, x, y;
        scanf("%lld %lld %lld", &n, &x, &y);
        long long *a = malloc(n * sizeof *a);
        long long S = 0;
        for (long long i = 0; i < n; ++i)
        {
            scanf("%lld", &a[i]);
            S += a[i] / x;
        }
        long long ans = 0;
        for (long long i = 0; i < n; ++i)
        {
            long long blocks_i = a[i] / x;
            long long cand = a[i] + (S - blocks_i) * y;
            if (cand > ans)
                ans = cand;
        }
        printf("%lld\n", ans);
        free(a);
    }
    return 0;
}