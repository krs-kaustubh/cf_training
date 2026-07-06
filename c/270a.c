//codeforce problem 270a : Fancy Fence
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int a;
        scanf("%d", &a);

        // a is angle
        // for a to be angle of a regular polygon, (n-2)*180/n = a
        if (a >= 180) {
            printf("NO\n");
        } else {
            int n = 360 / (180 - a);
            if (n * (180 - a) == 360) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}