#include <iostream> 
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    for (auto i = 0; i < nums.size(); i++)
    {
        auto sum = nums[start] + nums[end];
        if (sum == target)
        {
            return { start + 1, end + 1 };
        }
        else if (sum < target)
        {
            start++;
        }
        else if (sum > target)
        {
            end--;
        }
    }
    return {};
}

int main()
{ 
    std::vector<int> myVect{ 2,7,11,15 };
    std::vector<int> targets = twoSum(myVect, 9);
    for (auto x : targets)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    myVect = { 2, 3, 4};
    targets = twoSum(myVect, 6);
    for (auto x : targets)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    myVect = {-1, 0};
    targets = twoSum(myVect, -1);
    for (auto x : targets)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    myVect = { 0, 0, 3, 4};
    targets = twoSum(myVect, 0);
    for (auto x : targets)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    myVect = { 5, 25, 75 };
    targets = twoSum(myVect, 100);
    for (auto x : targets)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}