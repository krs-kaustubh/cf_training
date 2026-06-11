#include <iostream>
#include <string>

int main()
{
    std::string board[8];

    for (int i = 0; i < 8; i++)
    {
        std::cin >> board[i];
    }

    int answer = 16;

    for (int rowMask = 0; rowMask < (1 << 8); rowMask++)
    {
        for (int colMask = 0; colMask < (1 << 8); colMask++)
        {
            bool ok = true;

            for (int i = 0; i < 8 && ok; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    bool painted = (rowMask & (1 << i)) || (colMask & (1 << j));

                    if ((board[i][j] == 'B' && !painted) ||
                        (board[i][j] == 'W' && painted))
                    {
                        ok = false;
                        break;
                    }
                }
            }

            if (ok)
            {
                int strokes = __builtin_popcount(rowMask) + __builtin_popcount(colMask);
                if (strokes < answer)
                {
                    answer = strokes;
                }
            }
        }
    }

    std::cout << answer << '\n';

    return 0;
}
