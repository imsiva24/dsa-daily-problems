#include <iostream>
#include <string>
using namespace std;
// Day 3

// This question is asked by Amazon. Given a string representing the sequence of moves a robot vacuum makes, return whether or not it will return to its original position. The string will only contain L, R, U, and D characters, representing left, right, up, and down respectively.

// Ex: Given the following strings...

// "LR", return true
// "URURD", return false
// "RUULLDRD", return true

// My Questions
// 1. Are directions relative to current position or original position?
// 2.

// My Answers/Assumptions
// 1. Original Position

int main()
{
    string s;
    getline(cin, s);

    int l = 0, r = 0, u = 0, d = 0;

    for (const char i : s)
    {
        switch (i)
        {
        case 'L':
            l++;
            break;
        case 'R':
            r++;
            break;
        case 'U':
            u++;
            break;
        case 'D':
            d++;
            break;
        }
    }

    if (l == r && u == d)
        cout << "true";
    else
        cout << "false";

    return 1;
}