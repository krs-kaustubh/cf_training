// prb codefores 50A: Domino piling
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int dominoes = (n * m) / 2;

    printf("%d\n", dominoes);
    return 0;
}