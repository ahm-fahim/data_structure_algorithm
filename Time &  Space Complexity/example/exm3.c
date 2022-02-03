#include <stdio.h>

int main()
{
    int i, j, n, count;

    scanf("%d", &n);

    count = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            count = count + 1;
        }
    }

    for (i = 0; i < n; i++)
    {
        count = count + 1;
    }

    printf("count= %d\n", count);

    return 0;
}
// time complexity 0(n*2)