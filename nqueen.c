#include <stdio.h>
#include <stdlib.h>
int n = 4, pos[5];

int place(int q, int col)
{
    for (int i = 1; i <= q; i++)
    {
        if (pos[i] == col || abs(i - q) == abs(pos[i] - col))
        {
            return 0;
        }
    }
    return 1;
}

void nqueen(int q)
{
    for (int i = 1; i <= n; i++)
    {
        if (place(q, i))
        {
            pos[q] = i;
            if (q == n)
            {
                for (int i = 1; i <= n; i++)
                {
                    printf("%d ", pos[i]);
                }
                printf("\n");
            }
            else
            {
                nqueen(q + 1);
            }
        }
    }
}

int main()
{
    nqueen(1);
}