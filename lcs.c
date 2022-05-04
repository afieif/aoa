#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    char s1[20] = "abaaba", s2[20] = "babbab", table[20][20], dir[20][20];
    int m = 6, n = 6;
    for (int i = 0; i < m; i++)
    {
        table[i][0] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        table[0][i] = 0;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[j] == s2[i])
            {
                table[i][j] = table[i - 1][j - 1] + 1;
                dir[i][j] = 0;
                // 1->left
                // 0-> diagonal
                // 2-> up
            }
            else
            {
                table[i][j] = max(table[i - 1][j], table[i][j - 1]);
                if (table[i - 1][j] > table[i][j - 1])
                {
                    dir[i][j] = 1;
                }
                else
                {
                    dir[i][j] = 2;
                }
            }
        }
    }

    int i = m;
    int j = n;
    while (table[i][j] != 0)
    {
        if (dir[i][j] == 0)
        {
            printf("%c", s1[j]);
            i--;
            j--;
        }
        else if (dir[i][j] == 1)
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    printf("%c", s1[j]);
}