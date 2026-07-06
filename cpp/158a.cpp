#include <bits/stdc++.h>

using std::cin;
using std::cout;

int main() {
    int n, k;
    std::cin >> n >> k;

    int scores[n];
    for (int i = 0; i < n; i++) {
        std::cin >> scores[i];
    }

    // n is number of participants, k is the position of the participant whose score is to be compared
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= scores[k - 1] && scores[i] > 0) {
            count++;
        }
    }
    std::cout << count << '\n';
    return 0;
}