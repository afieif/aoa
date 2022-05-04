#include <stdio.h>

int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    return a;
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

void minmax(int arr[], int low, int high, int *mn, int *mx)
{
    static int count = 0;
    if (low == high)
    {
        *mn = min(arr[low], *mn);
        *mx = max(arr[low], *mx);
        printf("pass %d \n", count++);
        return;
    }
    else
    {
        int mid = (low + high) / 2;
        minmax(arr, low, mid, mn, mx);
        minmax(arr, mid + 1, high, mn, mx);
    }
}

int main()
{
    int arr[6] = {1, -1, 10, 100, 9, 5};
    int low = 0;
    int high = 6;
    int mn = arr[0], mx = arr[0];
    minmax(arr, low, high, &mn, &mx);
    printf("%d  %d", mn, mx);
}