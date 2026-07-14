#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::string;
using std::vector;

void sortAscending(vector<int> &v);
void sortDescending(vector<int> &v);
void sortUnique(vector<int> &v);
void printVector(const vector<int> &v);

int main()
{
    vector<string> v;
    cout << "Enter the elements of the vector (press Enter after each element when done send any char): " << "\n";

    string input;
    // Time: O(k), Space: O(k * avgLen) to store k input strings.
    for (int i = 0; (cin >> input) && input != "q" && input != "Q"; ++i)
    {
        v.push_back(input);
    }

    if (input == "q" || input == "Q")
    {
        cout << "end of input" << endl;
    }
    else if (!cin)
    {
        cout << "end of stream" << endl;
    }

    int n = v.size();

    vector<int> iv;
    vector<int> destroyedIndices;
    // Time: O(totalChars), Space: O(totalDigits) for extracted numeric strings.
    for (int i = 0; i < n; ++i)
    {
        // Convert string to integer and push to integer vector
        // if input is like 12k67 make it 1267 or 5q6 make it 56 or 58q to 58
        string str = v[i];
        string numStr;
        for (char c : str)
        {
            if (isdigit(c))
            {
                numStr += c;
            }
        }
        if (!numStr.empty())
        {
            iv.push_back(stoi(numStr));
        }
        else
        {
            destroyedIndices.push_back(i);
        }
    }

    cout << "Original vector: ";
    printVector(iv);

    cout << "Sorted vector in ascending order: ";
    sortAscending(iv);
    printVector(iv);

    cout << "Sorted vector in descending order  : ";
    sortDescending(iv);
    printVector(iv);

    cout << "Sorted vector with unique elements: ";
    sortUnique(iv);
    printVector(iv);

    cout << "Destroyed token indices (1-based): ";
    if (destroyedIndices.empty())
    {
        cout << "None";
    }
    else
    {
        for (int i = 0; i < static_cast<int>(destroyedIndices.size()); ++i)
        {
            cout << destroyedIndices[i] + 1 << " ";
        }
    }
    cout << endl;
}

void sortAscending(vector<int> &v)
{
    // Time: O(n log n), Space: O(log n) due to sort recursion stack.
    sort(v.begin(), v.end());
}

void sortDescending(vector<int> &v)
{
    // Time: O(n log n), Space: O(log n) from sort + O(1) extra for reverse.
    sortAscending(v);
    reverse(v.begin(), v.end());
}

void sortUnique(vector<int> &v)
{
    // Time: O(n log n), Space: O(log n) from sort; unique/erase are O(n).
    sortAscending(v);
    v.erase(unique(v.begin(), v.end()), v.end());
}

void printVector(const vector<int> &v)
{
    // Time: O(n), Space: O(1).
    int size = v.size();
    for (int i = 0; i < size; ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}