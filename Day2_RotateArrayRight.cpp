#include <iostream> 
#include <vector>

void rotate(std::vector<int>& nums, int k) 
{
    //Make copy 
    std::vector<int> copy(nums.size());

    for (int i = 0; i < nums.size(); i++) {
        copy[i] = nums[i];
    }

    for (int i = 0; i < nums.size(); i++) {
        nums[(i + k) % nums.size()] = copy[i];
    }
}
int main(){ 
    std::vector<int> myInts{ 1, 2, 3, 4, 5, 6, 7};           
    rotate(myInts, 3)
    return 0;
}