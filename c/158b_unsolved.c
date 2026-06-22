// codeforces 158B - Taxi
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int std[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &std[i]);
    }

    // pack of 1
    int count1 = 0;
    for (int i = 0; i < n; i++) {
        if (std[i] == 1) {
            count1++;
        }
    }

    // pack of 2
    int count2 = 0;
    for (int i = 0; i < n; i++) {
        if (std[i] == 2) {
            count2++;
        }
    }

    // pack of 3
    int count3 = 0;
    for (int i = 0; i < n; i++) {
        if (std[i] == 3) {
            count3++;
        }
    }

    // pack of 4
    int count4 = 0;
    for (int i = 0; i < n; i++) {
        if (std[i] == 4) {
            count4++;
        }
    }

    int taxis;
    
    // Pack of 3 & 1 in one taxi
    int t31 = count3 + count1;

    // pack of 2 & 2 in one taxi
    int t22 = count2 / 2;

    // pack of 4 in one taxi
    int t4 = count4;

    taxis = t4 + t31 + t22;
    printf("%d\n", taxis);
    return 0;
}