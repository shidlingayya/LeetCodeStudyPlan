#include <iostream> 
#include <vector>
#include <algorithm>

int searchInsert(std::vector<int>& elems, int target)
{
    auto it = std::lower_bound(elems.begin(), elems.end(), target);
    int index = it - elems.begin();
    return index;
}

int main()
{ 
    std::vector<int> myVect{ 1, 3, 5, 6 };
    std::cout << "Position to be inserted: " << searchInsert(myVect, 5);
    std::cout << "Position to be inserted: " << searchInsert(myVect, 2);
    std::cout << "Position to be inserted: " << searchInsert(myVect, 6);
    return 0;
}