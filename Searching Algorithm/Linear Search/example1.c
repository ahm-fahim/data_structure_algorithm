#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int find_value = 9;
    int position = 0;
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == find_value)
        {
            position = position + i;
            count += 1;
            break;
        }
    }

    if (count != 0)
    {
        printf("%d is fiound on %dth index\n", find_value, position);
    }
    else
    {
        printf("Not Found\n");
    }
    
    return 0;
}