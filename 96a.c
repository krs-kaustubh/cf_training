#include <stdio.h>

int main() {
    // prb 96 A Codeforces: Football
    char s[101];
    scanf("%100s", s);

    // if the string contains 7 or more consecutive characters, print YES
    int count = 1;
    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i] == s[i - 1]) {
            count++;
            if (count >= 7) {
                printf("YES\n");
                return 0;
            }
        } else {
            count = 1;
        }
    }
    printf("NO\n");
    return 0;
}