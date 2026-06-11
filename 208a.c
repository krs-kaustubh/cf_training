#include <stdio.h>

int main() {
    // prb 208 A Codeforces: Dubstep
    char s[201];
    scanf("%200s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 2; // skip WUB
            // print a space if the previous character is not a space to avoid multiple spaces
            if (i > 2 && s[i - 3] != ' ') {
                printf(" "); 
            }
        } else {
            printf("%c", s[i]); // print the character if it's not part of WUB
        }
    }
    printf("\n");
    return 0;
}