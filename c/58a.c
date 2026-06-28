// codeforces problem 58a chat room
#include <stdio.h>

int main() {
    char str[101], tar[] = "hello";
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        // find the first h in the string if not print no
        // if found then find the next e in the string if not print no
        // if found then find the next l(but twice) in the string if not print no
        // if found then find the next o in the string if not print no
        if (str[i] == tar[0]) {
            int j = 1;
            for (int k = i + 1; str[k] != '\0'; k++) {
                if (str[k] == tar[j]) {
                    j++;
                    if (j == 5) {
                        printf("YES\n");
                        return 0;
                    }
                }
            }
        }
    }

    printf("NO\n");
    return 0;
}