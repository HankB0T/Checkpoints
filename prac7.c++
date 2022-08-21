#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, index;
    string str;
    vector<string> perm;

    cout << "Enter the string: ";
    cin >> str;

    string ch = str;

    do
    {
        perm.push_back(ch);
        next_permutation(ch.begin(), ch.end());
    } while (ch != str);

    sort(perm.begin(), perm.end());
    for (i = 0; i < perm.size(); i++)
        if (perm[i] == str)
        {
            index = i + 1;
            break;
        }

    cout << "All the possible permutations are:\n";
    for (i = 0; i < perm.size(); i++)
        cout << perm[i] << " ";

    cout << "\nThe lexographic rank of the string according to all its permutations is: " << index;

    return 0;
}