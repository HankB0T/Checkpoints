#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s1, s2;

    cout << "Enter string1: ";
    cin >> s1;
    cout << "Enter string2: ";
    cin >> s2;

    for (i = 0; s1[i] && s2[i]; i++)
    {
        if (tolower(s1[i]) != tolower(s2[i]))
            break;
    }

    if (i == s1.size() && i == s2.size())
        cout << 0;
    else if (tolower(s1[i]) < tolower(s2[i]))
        cout << -1;
    else
        cout << 1;

    return 0;
}