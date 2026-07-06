// codeforces problem 230a : Dragons
#include <stdio.h>

int main() {
    // s is kirito's strength
    // n is number of dragons
    int s, n;
    scanf("%d %d", &s, &n);


    // x is strength of dragon
    // y is bonus strength of dragon
    int x[n], y[n];
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    // sorting dragons by their strength in ascending order
    // as kirito can defeat the weakest dragon first and gain its bonus strength

    // bubble sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(x[j] > x[j + 1]) {
                // swap x[j] and x[j + 1]
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
                // swap y[j] and y[j + 1]
                temp = y[j];
                y[j] = y[j + 1];
                y[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(s > x[i]) {
            s += y[i];
        } else {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}