#include <iostream> 
#include <string>
#include <vector>
void reverseString(std::vector<char>& s) {
    reverse(s.begin(), s.end());
}

int main()
{ 
    std::vector<char> myVect{ 'h','e','l','l','o'};
    reverseString(myVect);
    return 0;
}