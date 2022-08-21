#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    char chr[100];
    vector<char> in;
    vector<char> out;

    cout << "Enter the length of the string: ";
    cin >> n;

    cout << "\nEnter the string: ";
    for (i = 0; i < n; i++)
        cin >> chr[i];

    for (i = 0; i < n; i++)
    {
        in.push_back(chr[i]);
        if (in[i] == '{' || in[i] == '[')
            out.push_back(in[i]);
    }

    sort(in.begin(), in.end());

    for (i = 0; i < n; i++)
        if (in[i] != '{' && in[i] != '[' && in[i] != ']' && in[i] != '}')
            out.push_back(in[i]);

    for (i = 0; i < n; i++)
        if (in[i] == '}' || in[i] == ']')
            out.push_back(in[i]);

    for (i = 0; i < n; i++)
        cout << out[i];

    return 0;
}