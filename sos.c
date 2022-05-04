#include <stdio.h>
int s = 100, w[] = {50, 20, 60, 30, 10, 10};
int chosen[] = {0, 0, 0, 0, 0, 0};

int promising(int l, int wsf, int tpl)
{
    if (w[l] + wsf < s && tpl + wsf >= s)
    {
        return 0;
    }
    return 1;
}

void sos(int l, int wsf, int tpl)
{
    if (wsf == s)
    {
        for (int i = 0; i < 6; i++)
        {
            if (chosen[i] == 1)
            {
                printf("%d ", w[i]);
            }
        }
        printf("\n");
        return;
    }

    if (l == 5)
    {
        return;
    }

    if (promising(l, wsf, tpl))
    {
        chosen[l + 1] = 1;
        sos(l + 1, wsf + w[l + 1], tpl - w[l + 1]);
    }
    chosen[l + 1] = 0;
    sos(l + 1, wsf, tpl - w[l + 1]);
}

int main()
{
    sos(-1, 0, 180);
}