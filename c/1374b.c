// codeforces problem 1374B - Multiply by 2, divide by 6
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        long long n;
        int c2 = 0, c3 = 0;

        scanf("%lld", &n);

        while (n % 2 == 0) {
            n /= 2;
            c2++;
        }
        while (n % 3 == 0) {
            n /= 3;
            c3++;
        }

        if (n != 1 || c2 > c3) {
            printf("-1\n");
        } else {
            // Need (c3 - c2) multiplications by 2 and c3 divisions by 6.
            printf("%d\n", (c3 - c2) + c3);
        }
    }

    return 0;
}


/*
// codeforces problem 1374B - Multiply by 2, divide by 6
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    long long n[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &n[i]);
    }

    // for each test case finding it's prime factors in 2 & 3
    // if any other prime factor is present, we can't get 1 by multiplying by 2 or dividing by 6, so we print -1

    long long nf2[t];
    long long nf3[t];
    long long nf_other[t];

    int count_c0 = 0;
    int count_c1 = 0;
    int count_c2 = 0;
    int count_c3 = 0;

    for (int i = 0; i < t; i++)
    {
        nf2[i] = 0;
        nf3[i] = 0;
        while (n[i] % 2 == 0)
        {
            n[i] /= 2;
            nf2[i]++;
        }
        while (n[i] % 3 == 0)
        {
            n[i] /= 3;
            nf3[i]++;
        }
        if (n[i] % 2 != 0 && n[i] % 3 != 0)
        {
            nf_other[i]++;
        }

        // case 0: if any other prime factor is present, we can't get 1 by multiplying by 2 or dividing by 6, so we print -1
        if (nf_other[i] > 0)
        {
            printf("-1\n");
            continue;
        }
        // case 1: if nf2 == nf3, we divide by 6 nf2 or nf3 times to get 1
        if (nf2[i] == nf3[i])
        {
            n[i] /= 6;
            count_c1++;
        }
        // case 2: if nf2 > nf3, we can't get 1 by multiplying by 2 or dividing by 6, so we print -1
        else if (nf2[i] > nf3[i])
        {
            printf("-1\n");
            continue;
        }
        // case 3: if nf2 < nf3, we can multiply by 2 (nf3 - nf2) times to get nf3 == nf2, then we can divide by 6 nf3 times to get 1, so we print (nf3 - nf2) + nf3
        else
        {
            count_c2 += (nf3[i] - nf2[i]);
            count_c3 += nf3[i];
        }

        printf("%d\n", count_c1 + count_c2 + count_c3);
        printf("\n");
    }

    return 0;
}
*/