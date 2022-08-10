#include <iostream> 
#include <vector>

int search(std::vector<int>& elems, int target)
{
    int low = 0;
    int high = elems.size() - 1;
    int mid = 0;
    int index = -1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (elems[mid] == target)
        {
            index = mid;
            break;
        }

        if (elems[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return index;
}

int main()
{ 
    std::vector<int> myList{ -1, 0, 3, 5, 9, 15 };
    std::cout << "target index: " << search(myList, 9) << std::endl;

    myList = { -1, 0, 3, 5, 9, 12};
    std::cout << "target index: " << search(myList, 2) << std::endl;
    return 0;
}