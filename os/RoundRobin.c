#include <stdio.h>

int main()
{
    int burst[5] = {5, 3, 1, 2, 3}, turn[5], wait[5], arr[5] = {0, 1, 2, 3, 4};
    int n = 5, time = 0, done = 0, i = 0, quant = 2;

    while (done != n)
    {
        if (time >= arr[i])
        {
            if (burst[i] > 0)
            {
                if (burst[i] > quant)
                {
                    time += quant;
                    burst[i] -= quant;
                }
                else
                {
                    time += quant - burst[i];
                    burst[i] = 0;
                }
                if (!burst[i])
                {
                    turn[i] = time;
                    done++;
                }
            }
        }
        i = (i + 1) % n;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", turn[i]);
    }
}