// codeforces 158B - Taxi
#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int std[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &std[i]);
    }

    // pack of 1
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (std[i] == 1)
        {
            count1++;
        }
    }

    // pack of 2
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (std[i] == 2)
        {
            count2++;
        }
    }

    // pack of 3
    int count3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (std[i] == 3)
        {
            count3++;
        }
    }

    // pack of 4
    int count4 = 0;
    for (int i = 0; i < n; i++)
    {
        if (std[i] == 4)
        {
            count4++;
        }
    }

    int taxis;

    // pack of 4 can go alone
    taxis = count4;

    // pack of 3 can go with pack of 1
    taxis += count3;
    count1 -= count3;

    // pack of 2 can go with pack of 2
    taxis += count2 / 2;
    count2 = count2 % 2;

    // if there is one pack of 2 left, it can go with two packs of 1
    if (count2 > 0)
    {
        taxis++;
        count1 -= 2;
    }

    // if there are packs of 1 left, they can go in groups of 4
    if (count1 > 0)
    {
        taxis += count1 / 4;
        if (count1 % 4 > 0)
        {
            taxis++;
        }
    }

    printf("%d\n", taxis);
    return 0;
}
