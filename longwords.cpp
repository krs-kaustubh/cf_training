#include <cctype>
#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cin >> word;

    for (char ch : word) {
        if (!std::isalpha(static_cast<unsigned char>(ch))) {
            return 1;
        }
    }

    if (word.size() > 10) {
        std::cout << word.front() << word.size() - 2 << word.back() << '\n';
    }
    else {
        std::cout << word << '\n';
    }

    return 0;
}