#include <iostream> 
#include <vector>

void moveZeroes(std::vector<int>& nums)
{
    std::vector<int> copy;
    for (auto x : nums)
    {
        if (x != 0)
        {
            copy.push_back(x);
        }
    }

    for (auto x : nums)
    {
        if (x == 0)
        {
            copy.push_back(x);
        }
    }

    for (auto x : copy)
    {
        std::cout << x << " ";
    }
}
int main(){ 
    std::vector<int> myVect{ 0,1,0,3,12 };
    moveZeroes(myVect);
    return 0;
}