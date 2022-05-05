#include <stdio.h>
#include <limits.h>
int main()
{
    int ref[] = {50, 82, 170, 43, 140, 24, 16, 190}, sum = 0, n = 7;
    int min = INT_MAX, max = 200;
    for (int i = 0; i < n; i++)
    {
        min = ref[i] < min ? ref[i] : min;
        // max = ref[i] > max ? ref[i] : max;
    }

    int total = max - ref[0] + max - min;
    printf("total : %d, average : %f", total, (float)total / (n));
}