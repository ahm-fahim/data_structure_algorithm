#include <stdio.h>

void bubble_sort(int A[], int n)
{
    int i, j, temp;
    // step 1
    for (i = 0; i < n; i++)
    { // step 2
        for (j = 0; j < n - i - 1; j++) 
        { // step 3
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {8, 4, 1, 6, 3, 9, 2}, n = 7;

    printf("unsorted array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    bubble_sort(arr, n);
    printf("\n\nsorted array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
