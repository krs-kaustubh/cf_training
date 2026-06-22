#include <stdio.h>

void po1(void);
void pe1(void);
void po(void);
void pe(void);

int main() {
    // prb 705 A Codeforces: Hulk
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1)
            printf("I hate");
        else
            printf("I love");

        if (i == n)
            printf(" it\n");
        else
            printf(" that ");
    }

    return 0;
}

void po1(void) {
    printf("I hate it ");
}

void pe1(void) {
    printf("I love it ");
}   

void po(void) {
    printf("I hate ");
}

void pe(void) {
    printf("I love ");
}