#include <iostream>
#include <bits/stdc++.h>

using std::cout;
using std::cin;
using std::string;
using std::getline;

int main() {
    string food[5];
    int n = sizeof(food) / sizeof(food[0]);

    for(int i = 0; i < n; i++) {
        cout << "Enter food item you like or press \"q\" to quit " << i + 1 << ": ";
        getline(cin, food[i]);
        if(food[i] == "q") {
            food[i].erase();
            break;
        }
    }

    for(int i = 0; i < n; i++) {
        if(!food[i].empty()) {
            cout << food[i] << " is the food item you like.\n";
        }
    }
    return 0;
}