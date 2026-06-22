// making custom func like rev string, palindrome & anagram in cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using std::cin;
using std::cout;
using std::string;
using std::getline;
using std::tolower;

void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

void reverseString(string &str)
{
    // time complexity O(n) where n is the length of the string & space complexity O(1)
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
}

bool ispalindrome(const string &str)
{
    // time complexity O(n) where n is the length of the string & space complexity O(n)
    string rev = str;
    reverseString(rev);
    return str == rev;
}

bool isanagram(const string &str1, const string &str2)
{
    // time complexity O(n) where n is the length of the strings & space complexity O(1)
    if (str1.length() != str2.length()) return false;

    int strc[26] = {0};
    for (char c : str1) strc[tolower(c) - 'a']++;
    for (char c : str2) strc[tolower(c) - 'a']--;
    for (int i = 0; i < 26; i++) {
        if (strc[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a continuous string: ";
    getline(cin, str);

    reverseString(str);
    cout << "Reversed string: " << str << "\n";

    // reverse the string back to original for palindrome check
    reverseString(str);

    if (ispalindrome(str))
    {
        cout << "The string is a palindrome.\n";
    }
    else
    {
        cout << "The string is not a palindrome.\n";
    }

    // anagram uisng func without sorting
    string str1, str2;
    cout << "Enter first string for anagram check: ";
    getline(cin, str1);
    cout << "Enter second string for anagram check: ";
    getline(cin, str2);

    bool isAnagram = isanagram(str1, str2);
    if (isAnagram)
    {
        cout << "The strings are anagrams.\n";
    }
    else
    {
        cout << "The strings are not anagrams.\n";
    }

    return 0;
}