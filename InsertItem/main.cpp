#include <iostream>
#include <vector>
#include <string>

// extern template class _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS __vector_base_common<true>;

int findIndex(int firstIndex, int lastIndex, std::vector<int>& nums, int target)
{
    const auto delta = abs(lastIndex - firstIndex);
    if(delta <= 1)
        return nums[firstIndex] < target ? firstIndex + 1: firstIndex;
    const int newIndex = (firstIndex + lastIndex) / 2;
    if (nums[newIndex] == target)
        return newIndex;
    if (nums[newIndex] < target)
        return findIndex(newIndex, lastIndex, nums, target);
    else if (nums[newIndex] > target)
        return findIndex(firstIndex, newIndex, nums, target);
    return firstIndex;
}

int searchInsert(std::vector<int>& nums, int target) 
{
    const int firstIndex = 0;
    const int lastIndex = nums.size();
    return findIndex(firstIndex, lastIndex, nums, target);
}

int main()
{
    std::vector<int> nums = {1,3,5,6};
    const auto result = searchInsert(nums, 2);

    return 0;
}