// codefores 723A: The New Year: Meeting Friends
#include <stdio.h>

int main() {

    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);

    for(int i = 0; i < 3; i++) {
        if (x1 > x2) {
            int temp = x1;
            x1 = x2;
            x2 = temp;
        }
        if (x2 > x3) {
            int temp = x2;
            x2 = x3;
            x3 = temp;
        }
    }

    int d1 = x2 - x1;
    int d2 = x3 - x2;
    printf("%d\n", d1 + d2);
    return 0;

}