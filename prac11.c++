#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, a, n, ind;
    vector<int> v;
    map<int, int> m;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter vect: ";
    for (i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    for (i = 0; i < n; i++)
    {
        if (i < n / 2)
            m[v[i]] = -1;
        else
            m[v[i]] = 1;
    }

    for (auto it = m.begin(); it != m.end(); it++)
        if (it->second == 1)
        {
            ind = it->first;
            break;
        }
    for (i = n - 1; i >= 0; i--)
        if (v[i] < ind)
        {
            m[v[i]] = 1;
            break;
        }

    cout << endl;
    for (auto it = m.begin(); it != m.end(); it++)
        cout << it->first << ": " << it->second << endl;
}