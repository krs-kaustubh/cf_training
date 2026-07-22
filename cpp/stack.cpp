#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::stack;
using std::string;
using std::vector;

int main()
{
    stack<int> s;
    cout << "Enter the elements of the stack (press Enter after each element when done send any char): " << "\n";

    int input;
    cin >> input;
    while (cin)
    {
        s.push(input);
        cin >> input;
    }

    cout << "Stack elements (top to bottom): ";
    stack<int> printStack = s;
    while (!printStack.empty())
    {
        cout << printStack.top() << "\n";
        printStack.pop();
    }
    cout << "\nEnd of stack elements." << "\n";

    // sorrting the stack elements in ascending order
    vector<int> v;
    while (!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }

    sort(v.begin(), v.end());

    cout << "Sorted stack elements (top to bottom): ";
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << "\n";
    }

    return 0;
}