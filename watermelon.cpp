#include <iostream>

int main()
{
    // variable declaration and input 'w'
    int w;
    std::cin >> w;

    // checking if 'w' is even and greater than 2
    if (w % 2 == 0 && w > 2)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";

    return 0;
}