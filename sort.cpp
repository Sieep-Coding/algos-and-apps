#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums = {0,6,4,10,9,5,22,15};
    std::sort(nums.begin(), nums.end());
    for (int num : nums) {
        std::cout << num << ' ';
    }
    return 0;
}