#include <iostream>
#include <string>
using namespace std;

// Day 1

// This question is asked by Google. Given a string, reverse all of its characters and return the resulting string.

// Ex: Given the following strings...

// “Cat”, return “taC”
// “The Daily Byte”, return "etyB yliaD ehT”
// “civic”, return “civic”

int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n = 1;
    cin >> n;
    while (n--)
    {
        string str;
        getline(cin, str);

        for (int i = 0; i < str.size() / 2; i++)
        {
            char temp;
            int right = str.size() - i - 1;
            temp = str[i];
            str[i] = str[right];
            str[right] = temp;
        }

        cout << str << "\n";
    }

    return 1;
}