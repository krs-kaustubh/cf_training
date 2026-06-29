// codeforces problem: 4A - Watermelon
#include <stdio.h>

int main() {
    int weight;
    scanf("%d", &weight);
    
    if (weight > 2 && weight % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}