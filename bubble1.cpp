#include <iostream>

auto displayArray(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {27, 15, 39, 21, 28,
                 70, 125, 5, 0, 100, 
                 250, 10532, 12, 49};
    printf("Data before sort:\n");
    displayArray(arr, 14);
}