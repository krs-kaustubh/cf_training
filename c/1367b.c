// codeforces problem 1367B even array
#include <stdio.h>
#include <stdbool.h>

bool is_beautiful(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(i % 2 != arr[i] % 2) {
            return false;
        }
    }
    return true;
}

void make_it_beautiful(int arr[], int n, int *count) {
    // count the number of even numbers in odd positions and odd numbers in even positions those are bad
    int bad_even = 0, bad_odd = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] %2 == 0 && i % 2 != 0) {
            bad_even++;
        } else if(arr[i] % 2 != 0 && i % 2 == 0) {
            bad_odd++;
        }
    }
    
    if (bad_even == bad_odd) {
        *count = bad_even;
    } else {
        // if the number of bad even and bad odd are not equal then it's not possible to make it beautiful
        *count = -1; 
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int n, count = 0;
        scanf("%d", &n);

        int arr[n];
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }

        if(is_beautiful(arr, n)) {
            printf("0\n");
        } else {
            make_it_beautiful(arr, n, &count);
            printf("%d\n", count);
        }
    }
    return 0;
}