#include <stdio.h>

int main()
{
    int ara[] = {1, 3, 4, 5, 6, 7, 8, 9, 11, 33, 44, 55, 66, 77, 88, 99};
    
    int left_indx = 0;
    int right_indx = 15;
    int mid_indx;
    int find_value = 3;

    while (left_indx <= right_indx)
    {

        mid_indx = (left_indx + right_indx) / 2;

        if (find_value == ara[mid_indx])
        {
            break;
        }
        if (find_value < ara[mid_indx])
        {
            right_indx = mid_indx - 1;
        }
        else
        {
            left_indx = mid_indx + 1;
        }
    }
    if (left_indx > right_indx)
    {
        printf("%d is not in the array.\n", find_value);
    }
    else
    {
        printf("%d is found in the array on %dth index", ara[mid_indx], mid_indx);
    }
    return 0;
}