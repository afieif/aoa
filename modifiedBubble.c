#include <stdio.h>
int main()
{
    int arr[10] = {1,3,2,4,5,6,7,8,9,10};
    int size = 10;
    int pass = 1;
    while (size--)
    {
        if (pass == 0)
        {
            printf("done\n");
            break;
        }
        for (int i = 0; i < size; i++)
        {
            pass = 0;
            if (arr[i] > arr[i + 1])
            {
                pass = 1;
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