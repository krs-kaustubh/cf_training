// codeforces 118A - String Task
#include <stdio.h>
#include <string.h>

int main() {
    char str[101], result[201];
    scanf("%s", str);

    for (int i = 0; str[i]; i++) {
        // Convert uppercase to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }

    int j = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y') {
            result[j++] = '.';
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; 

    printf("%s\n", result);
    return 0;
}