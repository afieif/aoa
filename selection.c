#include <stdio.h>
int main()
{
    int arr[10] = {10, 3, 8, 4, 6, 5, 4, 10, 2, 1};
    int size = 10;
    for (int i = 0; i < size; i++)
    {
        int min = arr[i];
        int index = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = min;
        arr[index] = temp;

        for (int i = 0; i < 10; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}