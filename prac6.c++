#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, m;
    string str;
    vector<char> odd;
    vector<char> even;
    vector<char> total;

    cout << "Enter the string: ";
    cin >> str;

    for (i = 0; i < str.size(); i++)
        if ((i + 1) % 2 != 0)
            odd.push_back(str[i]);
        else
            even.push_back(str[i]);

    n = odd.size();
    m = even.size();

    for (i = 0; i < n; i++)
        total.push_back(odd[i]);
    for (i = 0; i < m; i++)
        total.push_back(even[i]);

    cout << "\nThe string after shifting all even positions to the end is: ";
    for (i = 0; i < str.size(); i++)
        cout << total[i];

    return 0;
}