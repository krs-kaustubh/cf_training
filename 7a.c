// prb codeforces: 7A Kalevitch and Chess

#include <stdio.h>

int main()
{

    char s[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            scanf(" %c", &s[i][j]);
        }
    }

    int empty_rows = 0, empty_cols = 0;

    for (int i = 0; i < 8; i++)
    {
        int has_black = 0;
        for (int j = 0; j < 8; j++)
        {
            if (s[i][j] == 'B')
            {
                has_black = 1;
                break;
            }
        }
        if (!has_black)
        {
            empty_rows++;
        }
    }

    for (int j = 0; j < 8; j++)
    {
        int has_black = 0;
        for (int i = 0; i < 8; i++)
        {
            if (s[i][j] == 'B')
            {
                has_black = 1;
                break;
            }
        }
        if (!has_black)
        {
            empty_cols++;
        }
    }

    printf("%d\n", empty_rows + empty_cols);

    return 0;
}
