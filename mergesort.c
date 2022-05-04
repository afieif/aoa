#include <stdio.h>

void sort(int arr[], int low, int mid, int high, int size)
{
    int ls = mid - low + 1;
    int rs = high - mid;

    int l[50], r[50];

    for (int i = 0; i < ls; i++)
    {
        l[i] = arr[low + i];
    }
    for (int j = 0; j < rs; j++)
    {
        r[j] = arr[mid + 1 + j];
    }

    int k = low;
    int i = 0;
    int j = 0;

    while (i < ls && j < rs)
    {
        if (l[i] <= r[i])
        {
            arr[k] = l[i];
            i++;
        }
        else
        {
            arr[k] = r[j];
            j++;
        }
        k++;
    }

    while (i < ls)
    {
        arr[k] = l[i];
        i++;
        k++;
    }

    while (j < rs)
    {
        arr[k] = r[j];
        j++;
        k++;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int low, int high, int size)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        merge(arr, low, mid, size);
        merge(arr, mid + 1, high, size);
        sort(arr, low, mid, high, size);
    }
}

int main()
{
    int a[5] = {1, 5, 2, 4, 3};
    merge(a, 0, 4, 5);
}