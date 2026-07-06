// codeforces problem 1857a: Array Colouring
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }

        long long sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[j];
        }

        if (sum % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}