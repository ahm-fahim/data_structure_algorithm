#include <stdio.h>

int main()
{
    int i, n, count;

    scanf("%d", &n);

    count = 0;

    for (i = 0; i < n; i++)
    {
        count = count + 1;
    }

    printf("n = %d, count = %d\n", n, count);

    return 0;
}
// time complexity 0(n)