#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ref[] = {50, 82, 170, 43, 140, 24, 16, 190}, sum = 0, n = 7;
    for (int i = 0; i < n; i++)
    {
        sum += abs(ref[i] - ref[i + 1]);
    }
    printf("total : %d, average : %f", sum, (float)sum / (n));
}