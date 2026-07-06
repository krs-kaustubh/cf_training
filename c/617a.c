// codeforces problem 617A : Elephant
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // the elephant can take 5 steps of 1, 2, 3, 4, or 5 units
    // so the minimum number of steps required is n / 5
    // if there is a remainder, it means the elephant needs one more step
    int steps = n / 5;
    if (n % 5 != 0) {
        steps++;
    }
    printf("%d\n", steps);
}