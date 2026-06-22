// codeforce 584a: Olesya and Rodion

#include <stdio.h>

int main() {
    // n is length of number from 1 to 100, l is the number it should be divisible by
    int n, l;
    scanf("%d %d", &n, &l);
    
    if (n == 1 && l == 10) {
        printf("-1\n");
        return 0;
    }

    // to counter 10^100 number, we will use an array of size n to store the digits of the number
    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }

    // a number will be l * 10^(n-1)
    if (l == 10) {
        a[0] = 1;
    } else {
        a[0] = l;
    }
    for (int i = 1; i < n; i++) {
        a[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}