#include <stdio.h>

int main(void) {

    int n;
    scanf("%d", &n);

    int visited[n + 1];
    for (int i = 0; i <= n; i++) {
        visited[i] = 0;
    }

    int p, level;
    scanf("%d", &p);
        for (int i = 0; i < p; i++) {
            scanf("%d", &level);
            if (level >= 1 && level <= n) {
                visited[level] = 1;
            }
        }

    scanf("%d", &p);
        for (int i = 0; i < p; i++) {
            scanf("%d", &level);
            if (level >= 1 && level <= n) {
                visited[level] = 1;
            }
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");
    return 0;
}
