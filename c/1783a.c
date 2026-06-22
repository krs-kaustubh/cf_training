// codeforces 1783A - Make it Beautiful

#include <stdio.h>
#include <stdbool.h>

bool are_all_same(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            return false;
        }
    }
    return true;
}

bool is_beautiful(int a[], int n) {
    int sum = a[0];
    
    for (int i = 1; i < n; i++) {
        if (sum == a[i]) {
            return false; 
            // If any prefix sum equals the next element, it's not beautiful
        }
        sum += a[i]; 
    }
    return true; 
    // If no prefix sum equals the next element, it's beautiful
}

void make_it_beautiful(int a[], int n) {
    // copy the last/max element then copy rest of the array to an +1 index and then copy the max element to the first-index of the array
    int max_element = a[n - 1];
    for (int i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = max_element;
}

int main() {
    // t is the number of test cases
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        // n is the number of elements in the array for each test case
        int n;
        scanf("%d", &n);

        // Read the array for each test case
        int a[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        // passing array to a custom funcn to check if all elements are same or not
        if (!are_all_same(a, n)) {
            // checking if already beautiful
            if (!is_beautiful(a, n)) {
                make_it_beautiful(a, n); 
                // Rearranging the array to make it beautiful
                printf("YES\n"); 
                // Print YES after making it beautiful
                // print the rearranged array
                for (int j = 0; j < n; j++) {
                    printf("%d ", a[j]);
                }
                printf("\n");
            } else {
                printf("YES\n"); 
                // If it's already beautiful, print YES
                // print the array as is
                for (int j = 0; j < n; j++) {
                    printf("%d ", a[j]);
                }
                printf("\n");
                continue; 
                // Move to the next test case
            }
        } else {
            printf("NO\n"); 
            // If all elements are the same, print NO
        }
    }
    return 0;
}