#include <stdio.h>

int main() {
    // number of vectors
    int n = 0;
    // no of vectors
    scanf("%d", &n);

    int vectors[n][3];
    // read the vectors
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &vectors[i][j]);
        }
    }

    int sumx = 0;
    for(int i = 0; i < n; i++) {
        sumx += vectors[i][0];
    }

    int sumy = 0;
    for(int i = 0; i < n; i++) {
        sumy += vectors[i][1];
    }

    int sumz = 0;
    for(int i = 0; i < n; i++) {
        sumz += vectors[i][2];
    }

    if(sumx == 0 && sumy == 0 && sumz == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}