// codeforces problem 1878a : How Much Does Daytona Cost?
#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        bool found = false;
        for (int j = 0; j < n; j++) {
            if (a[j] == k) {
                found = true;
                break;
            }
        }

        if (found) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    }
    return 0;
}