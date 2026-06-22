// codeforces problem 2218B - The 67th 6-7 Integer Problem
#include <stdio.h>

int main() {
    // test case varries from 1 to 6767
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        // making array to store the 7 integers
        int arr[7];
        for (int j = 0; j < 7; j++) {
            scanf("%d", &arr[j]);   
        }

        // firstly bubbling out the largest number in the array to the end of the array
        for (int j = 0; j < 6; j++) {
            for (int k = 0; k < 6 - j; k++) {
                if (arr[k] > arr[k + 1]) {
                    int temp = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = temp;
                }
            }
        }
        // multipling the first 6 numbers in the array by -1
        for (int j = 0; j < 6; j++) {
            arr[j] *= -1;
        }

        // now adding the last/maximum/ 7th number in the array to the sum of the first 6 numbers
        int sum = 0;
        for (int j = 0; j < 6; j++) {
            sum += arr[j];
        }
        sum += arr[6];
        printf("%d\n", sum);
    }
}