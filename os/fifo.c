#include <stdio.h>

int main()
{
    int ref[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 3};
    int fr = 4, ch[4] = {-1, -1, -1, -1}, hits = 0, miss = 0, index = 0;
    for (int i = 0; i < 14; i++)
    {
        int found = 0;
        for (int j = 0; j < 4; j++)
        {
            if (ch[j] == ref[i])
            {
                hits += 1;
                found = 1;
            }
        }
        if (!found)
        {
            ch[index] = ref[i];
            miss += 1;
            index = (index + 1) % 4;
        }
        printf("[%d] ", ref[i]);
        for (int k = 0; k < 4; k++)
        {
            printf(" %d ", ch[k]);
        }
        if (found)
        {
            printf(" HIT ");
        }
        printf("\n");
    }
    printf("%d %d ", hits, miss);
}