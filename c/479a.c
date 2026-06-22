// codeforces 479A - Expression
#include <stdio.h>

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // calculating the expression
    // Calculate all possible combinations
    int ans1 = a + b + c;
    int ans2 = a * b * c;
    int ans3 = a + b * c;
    int ans4 = a * b + c;
    int ans5 = (a + b) * c;
    int ans6 = a * (b + c);
    
    // Find the maximum value
    int max_val = ans1;
    
    if (ans2 > max_val) max_val = ans2;
    if (ans3 > max_val) max_val = ans3;
    if (ans4 > max_val) max_val = ans4;
    if (ans5 > max_val) max_val = ans5;
    if (ans6 > max_val) max_val = ans6;
    
    // Print the maximum result
    printf("%d\n", max_val);
    
    return 0;
}