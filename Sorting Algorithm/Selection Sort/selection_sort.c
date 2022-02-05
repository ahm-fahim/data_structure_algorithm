#include <stdio.h>

void selectionSort(int A[], int n)
{
    int i, j, index_min, temp;

    for (i = 0; i < n - 1; i++)
    {
        index_min = i;

        for (j = i + 1; j < n; j++)
        {
            if (A[j] > A[index_min]) //dicending > / ascending <  
            {
                index_min = j;
            }
        }
        if (index_min != i)
        {
            
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
    }
}

int main()
{
    int arr[] = {8, 2, 4, 1, 5, 7};
    int n = 6;
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}