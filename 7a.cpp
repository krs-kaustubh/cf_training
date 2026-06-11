#include <iostream>
#include <string>

int main()
{
    std::string board[8];

    for (int i = 0; i < 8; i++)
    {
        std::cin >> board[i];
    }

    int strokes = 0;

    for (int i = 0; i < 8; i++)
    {
        bool allBlack = true;
        for (int j = 0; j < 8; j++)
        {
            if (board[i][j] != 'B')
            {
                allBlack = false;
                break;
            }
        }
        if (allBlack)
            strokes++;
    }

    for (int j = 0; j < 8; j++)
    {
        bool allBlack = true;
        for (int i = 0; i < 8; i++)
        {
            if (board[i][j] != 'B')
            {
                allBlack = false;
                break;
            }
        }
        if (allBlack)
            strokes++;
    }

    std::cout << strokes << '\n';

    return 0;
}
