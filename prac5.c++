#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<char, int> order; // time complexity = O(1)

    order[114] = 10;  // r
    order[117] = 5;   // u
    order[115] = 100; // s
    order[116] = 1;   // t

    for (auto i : order)
        cout << i.first << " : " << i.second << '\n';
}