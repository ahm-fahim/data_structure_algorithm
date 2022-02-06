#include <stdio.h>
#define N 8

void insertion_sort(int A[], int n)
{
    int i, j, item;

    for (i = 1; i < n; i++)
    {
        item = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > item)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = item;
    }
}

int main()
{
    int arr[N] = {5, 4, 3, 2, 1, 6, 7, 8};

    // main array
    printf("Main Array\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    // insertion sorted array
    insertion_sort(arr, N);

    printf("\n\nAfter insertion sort\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}