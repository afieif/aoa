#include <stdio.h>
int num = 4, currColor[4];

int canColor(int nd, int color, int graph[10][10])
{
    for (int i = 1; i <= num; i++)
    {
        if (graph[nd][i] == 1 && currColor[i] == color)
        {
            return 0;
        }
    }

    return 1;
}

void color(int nd, int graph[10][10])
{
    for (int i = 1; i <= num; i++)
    {
        if (canColor(nd, i, graph))
        {
            currColor[nd] = i;
            printf("< %d %d > \n", nd, i);
            break;
        }
    }
    if (nd == num)
    {
        for (int k = 1; k <= num; k++)
        {
            printf("%d ", currColor[k]);
        }
        printf("\n");
    }
    else
    {
        color(nd + 1, graph);
    }
}

int main()
{
    int graph[10][10];

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            graph[i][j] = 0;
        }
    }

    graph[1][2] = graph[2][1] = 1;
    graph[3][2] = graph[2][3] = 1;
    graph[3][4] = graph[4][3] = 1;
    graph[1][4] = graph[4][1] = 1;

    color(1, graph);
}