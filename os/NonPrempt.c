#include <stdio.h>
#include <limits.h>

int main()
{
    int bt[] = {10, 8, 5}, pr[] = {0, 1, 2}, n = 3, time = 0, turn[5], wait[5], done = 0;
    while (done != n)
    {
        int index, min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (pr[i] < min)
            {
                min = pr[i];
                index = i;
            }
        }
        pr[index] = INT_MAX;
        time += bt[index];
        turn[index] = time;
        done++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", turn[i]);
    }
}