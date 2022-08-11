#include <iostream> 
#include <vector>
#include <algorithm>

std::vector<int> sortedSquares(std::vector<int>& arr)
{
    std::vector<int> squares{};
    for (auto x : arr)
    {
        squares.push_back(x * x);
    }
    std::sort(squares.begin(), squares.end());
    return squares;
}

int main()
{ 
    std::vector<int> myInts{ -4, -1, 0, 3, 10 };
    std::vector<int> squares_of_sorted = sortedSquares(myInts);
    for (auto x : squares_of_sorted)
    {
        std::cout << x << ",";
    }
    return 0;
}