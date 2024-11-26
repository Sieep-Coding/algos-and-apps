#include <stdio.h>

void displayArray(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        printf("Data after loop: %d", i + 1);
        displayArray(arr, n);
    }
}

int main()
{
    int arr[] = {27, 15, 39, 21, 28,
                 70, 125, 5, 0, 100, 
                 250, 10532, 12, 49};
    printf("Original Data: ");
    displayArray(arr, 14);
    bubbleSort(arr, 14);
    printf("Sorted Array: ");
    displayArray(arr, 14);
}