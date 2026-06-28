// codeforces problem 750A new year and hurry
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    // total time 240 minutes
    int total_time = 240;
    int time_left = total_time - k;


    // time taken for each problem is 5 * i 
    int time_taken = 0;
    int problems_solved = 0;
    for (int i = 1; i <= n; i++) {
        time_taken += 5 * i;
        if (time_taken <= time_left) {
            problems_solved++;
        } else {
            break;
        }
    }

    printf("%d\n", problems_solved);
    return 0;
}