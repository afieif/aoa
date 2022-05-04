#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10] = {10, 3, 8, 4, 6, 5, 4, 10, 2, 1};
    int size = 10;
    while (size--)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}