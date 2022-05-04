#include <stdio.h>

int main()
{
    float w[] = {2, 3, 4, 1};
    float p[] = {100, 200, 40, 300};
    float lim = 3;
    float prof = 0;

    int len = 4;
    while (len--)
    {
        for (int i = 0; i < len; i++)
        {
            if (p[i] < p[i + 1])
            {
                float temp = p[i];
                p[i] = p[i + 1];
                p[i + 1] = temp;

                temp = w[i];
                w[i] = w[i + 1];
                w[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("[%f] ", w[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("[%f] ", p[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        if (lim != 0)
        {
            if (w[i] <= lim)
            {
                prof += p[i];
                lim -= w[i];
                printf("%f %f\n", w[i], p[i]);
                printf("%f %f\n", prof, lim);
            }
            else
            {
                prof += (p[i] / w[i]) * lim;
                lim = 0;
                printf("%f %f\n", w[i], p[i]);
                printf("%f %f\n", prof, lim);
            }
        }
    }
}