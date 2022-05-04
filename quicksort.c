#include <stdio.h>

int pivot(int arr[], int low, int high)
{
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] < arr[high])
        {
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i;
}

void quicksort(int arr[], int low, int high, int size)
{
    if (low < high)
    {
        int pos = pivot(arr, low, high);
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        quicksort(arr, low, pos, size);
        quicksort(arr, pos + 1, high, size);
    }
}

int main()
{
    int a[5] = {9, 1, 4, 3, 2};
    quicksort(a, 0, 4, 5);
}