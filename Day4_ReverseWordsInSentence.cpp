#include <iostream> 
#include <string>
std::string getReversedStr(std::string str)
{
    std::string revSentence = "";
    std::string word = "";
    for(auto i = 0U;i<str.size();i++)
    {        
        if (str[i] == ' ')
        {
            std::reverse(word.begin(), word.end());
            revSentence += word + " ";
            word = "";
        }
        else {
            word = word + str[i];
        }
    }
    std::reverse(word.begin(), word.end());
    revSentence += word;
    return revSentence;
}

int main()
{ 
    std::string str = "Let's take LeetCode contest";
    std::cout << "str:" << str << " rev Str:" << getReversedStr(str) << std::endl;
    str = "God Ding";
    std::cout << "str:" << str << " rev Str:" << getReversedStr(str) << std::endl;
    return 0;
}