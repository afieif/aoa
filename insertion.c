#include <stdio.h>
int main()
{
    int arr[10] = {10, 3, 8, 4, 6, 5, 4, 10, 2, 1};
    int size = 10;
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i-1;

        while ( key < arr[j] && j>= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}