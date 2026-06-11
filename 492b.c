// codeforces 492B - Vanya and Lanterns
#include <stdio.h>

int main()
{
    long long n, l;
    scanf("%lld %lld", &n, &l);

    int a[n + 2];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i + 1]);
    }

    // add the start and end of the street as lantern positions
    a[0] = 0;
    a[n + 1] = l;

    // sort the lantern positions
    for (int i = 0; i < n + 2; i++) {
        for (int j = i + 1; j < n + 2; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // find the maximum required radius
    // edges distance from 0 to first lantern, and from last lantern to l (without halving), because the light from the first and last lanterns
    // are same as if they were at the edge of the street, so we don't need to halve those distances
    // for internal gaps, we need to halve the distance between lanterns, because the light from two adjacent lanterns will meet in the middle
    double maxd = 0;
    // left edge
    if (n >= 1) {
        if (a[1] - a[0] > maxd)
            maxd = a[1] - a[0];
        // right edge
        if (a[n + 1] - a[n] > maxd)
            maxd = a[n + 1] - a[n];
        // internal gaps
        for (int i = 1; i <= n - 1; i++) {
            double d = (a[i + 1] - a[i]) / 2.0;
            if (d > maxd)
                maxd = d;
        }
    } else {
        // no lanterns: whole street must be lit
        maxd = l;
    }
    printf("%f\n", maxd);
    return 0;
}