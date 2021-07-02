
#include <iostream>
#include <string>
using namespace std;
// Day 3

// This question is asked by Google. Given a string, return whether or not it uses capitalization correctly. A string correctly uses capitalization if all letters are capitalized, no letters are capitalized, or only the first letter is capitalized.

// Ex: Given the following strings...

// "USA", return true
// "Calvin", return true
// "compUter", return false
// "coding", return true

// My Questions
// 1. Is the string single word or multiple words?
// 2.

// My Answers/Assumptions
// 1. Assume it to be a single word..

int main()
{
    string s;
    getline(cin, s);

    // case 1 -> Starting with a capital letter -> Check if rest all are capital / none
    // case 2 -> Starting with a lowercase -> Check if it has an uppercase
    int count = 0;
    if (s[0] < 91)
    {
        count++;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] < 91)
                count++;
        }

        cout << ((count == s.size() || count == 1) ? "true" : "false");
    }
    else
    {
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] < 91)
                count++;
        }
        cout << (count > 0 ? "false" : "true");
    }

    return 1;
}