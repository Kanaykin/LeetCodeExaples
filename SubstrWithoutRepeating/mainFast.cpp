#include <string>
#include <set>
#include <iostream>
#include "../helpers/MemoryUsage.h"

int findSubstring(int j, const std::string& s)
{
    std::string result = s.substr(j, 1);
    auto found = s.length() + 1;
    std::string substr = s.substr(j, found - j);
    do
    {
        substr = substr.substr(1, found - 1);
        found = substr.find(s[j]);
        if (substr.length() <= 1 || found <= 1)
        {
            result += substr.substr(0, found);;
            break;
        }
        ++j;
        result += s[j];
    }
    while(true);
    return result.length();
}

int main()
{
    helpers::MemoryUsage memUsage;
    std::string s = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ abcdefghijklmnopqrstuvwxyzABCD";

    // std::string s = "abcabcbb";

    // std::set<char> chars;
    int maxval = 0;
    for(int i = 0; i < s.length(); ++i)
    {
        maxval = std::max(maxval, findSubstring(i, s));

        

        // for(int j = i; j < s.length(); ++j)
        // {
        //     if(chars.find(s[j]) == chars.end())
        //     {
        //         chars.insert(s[j]);
        //         std::cout << " s[j] " << s[j] << " \n";
        //     }
        //     else
        //     {
        //         maxval = std::max(maxval, static_cast<int>(chars.size()));
        //         std::cout << " break " << maxval << " \n";
        //         chars.clear();
        //         break;
        //     }
        //     maxval = std::max(maxval, static_cast<int>(chars.size()));
        //     std::cout << " last " << maxval << " \n";
        // }
    }
    return maxval;
    return 0;
}