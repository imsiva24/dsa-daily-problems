#include <iostream>
#include <string>
using namespace std;

// Day 2

// This question is asked by Facebook. Given a string, return whether or not it forms a palindrome ignoring case and non-alphabetical characters.
// Note: a palindrome is a sequence of characters that reads the same forwards and backwards.

// Ex: Given the following strings...

// "level", return true
// "algorithm", return false
// "A man, a plan, a canal: Panama.", return true

// My Questions
// 1. Can I modify the original string?
// 2. Sapce complexity? -> Can I make another string and compare?

// My solution
// 1. I'm not modifying it directly but storing it in another array.
// 2. Space complexity -> O(n)

// TODO
// Think of other solutions without using another array

int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    string str;
    getline(cin, str);

    string mod_str;

    // Ignore case and non alphabetical characters
    for (int i = 0; i < str.size(); i++)
    {
        int ascii_str = int(str[i]);
        if ((ascii_str < 91 && ascii_str >= 65) || (ascii_str < 123 && ascii_str >= 97))
        {
            mod_str.push_back(str[i]);
        }
    }

    cout << mod_str << "\n";
    int l = 0, r = mod_str.size() - 1;
    bool isPalindrome = true;

    while (l <= r)
    {
        if (tolower(mod_str[l]) != tolower(mod_str[r]))
        {
            isPalindrome = false;
            break;
        }
        l++;
        r--;
    }
    cout << (isPalindrome == 1 ? "true" : "false");

    return 1;
}