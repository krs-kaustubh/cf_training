#include <bits/stdc++.h>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::sort;
using std::string;

void sortAscending(vector<int> &v);
void printVector(const vector<int> &v);

int main() {
    vector<int> v;
    cout << "Enter the elements of the vector (press Enter after each element when done send any char): ";   
    
    int input;
    while (cin >> input) {
        v.push_back(input); 
    }

    if (cin.fail() && !cin.eof()) {
        cin.clear(); // clear the error state

        string dummy;
        cin >> dummy; // read the invalid input

        if (dummy == "q" || dummy == "Q") {
            cout << "Sorted vector in ascending order: ";
            sortAscending(v);
            printVector(v);
            return 0;
        } 
        else {
            cout << "Invalid input. Please enter integers only." << endl;
            cout << "Sorted vector in ascending order: ";
            sortAscending(v);
            printVector(v);
            return 1;
        }
    } 
}

void sortAscending(vector<int> &v) {
    sort(v.begin(), v.end());
}

void printVector(const vector<int> &v) {
    int size = v.size();
    for (int i = 0; i < size; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}