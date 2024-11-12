#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums = {0,6,4,10,9,5,22,15};
    auto it = std::find(nums.begin(), nums.end(), 9);
    if(it != nums.end()) {
        std::cout << "Found 9 at position: " << (it - nums.begin());
    } else {
        std::cout << "9 not found" << std::endl;
    }
    return 0;
}