// codeforces 158b: Taxi
#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);

    int std[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &std[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += std[i];
    }

    int taxis = sum / 4;
    int rem = sum % 4;
    if (rem > 0 && rem <= 4) {
        taxis++;
    }

    printf("%d\n", taxis);
    return 0;
}