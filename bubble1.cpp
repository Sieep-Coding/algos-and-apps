// Using a dynamic array so there is no need to pass array size anymore!
#include <iostream>
#include <vector>

void displayArray(const std::vector<int> &arr)
{
    for (const auto &elem : arr)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

void bubbleSort(std::vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
        std::cout << "Data after iteration " << i + 1 << ": ";
        displayArray(arr);
    }
}

int main()
{
    std::vector<int> arr = {27, 15, 39, 21, 28, 70, 125, 5, 0, 100, 250, 10532, 12, 49};
    std::cout << "Data before sort:\n";
    displayArray(arr);
    bubbleSort(arr);
    std::cout << "Sorted Array: ";
    displayArray(arr);
}