#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, count = 0, max = INT_MIN;
    string str;
    unordered_map<char, int> uni;

    cout << "Enter the string: ";
    cin >> str;

    for (i = 0; i < str.size(); i++)
    {
        if (count > max)
            max = count;

        uni[str[i]]++;

        if (uni[str[i]] == 1)
            count++;
        else
        {
            i = i - count;
            count = 0;
            uni.clear();
        }
    }

    if (count > max)
        max = count;

    cout << "The longest non-repeating substring is: " << max;

    return 0;
}

//  if (uni[str[i]] > 1)