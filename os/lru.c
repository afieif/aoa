#include <stdio.h>

int main()
{
    int ref[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 3}, prev[100];
    int fr = 4, ch[4] = {-1, -1, -1, -1}, hits = 0, miss = 0, index = 0;
    for (int i = 0; i < 14; i++)
    {
        int found = 0;
        for (int j = 0; j < 4; j++)
        {
            if (ch[j] == ref[i])
            {
                hits += 1;
                prev[ref[i]] = i;
                found = 1;
            }
        }
        if (!found)
        {
            if (i <= 3)
            {
                ch[index] = ref[i];
                prev[ref[i]] = i;
                miss += 1;
                index = (index + 1) % 4;
            }
            else
            {
                int min = 999;
                index = 0;
                for (int l = 0; l < 4; l++)
                {
                    if (prev[ch[l]] < min)
                    {
                        min = prev[ch[l]];
                        index = l;
                    }
                }
                ch[index] = ref[i];
                miss++;
            }
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