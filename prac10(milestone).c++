#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    int n, m, days, count, sum = 0, flag = 0, ind;
    vector<int> comp;
    vector<int> srtd;
    vector<int> newsrt;
    map<int, int> half;
    //
    //
    // Duplicating the original array.
    cout << "Enter the number of days: ";
    cin >> days;
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the array: ";
    for (i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        comp.push_back(a);
    }
    //
    //
    // Assigning values starting for each element. -1s for the smaller set and +1s for the larger set.
    for (i = 0; i < comp.size(); i++)
        srtd.push_back(comp[i]);

    sort(srtd.begin(), srtd.end());

    m = days;
    for (i = 0; i < srtd.size(); i++)
    {
        if (m > 1)
            half[srtd[i]] = -1;
        else
            half[srtd[i]] = 1;
        m--;
    }
    //
    //
    // -1s do not group with each other. +1s group with each other. +1s do not group when they encounter a -1 in between.
    while (days != comp.size())
    {
        for (i = 0; i < comp.size(); i++)
        {
            count = 0;
            if (half[comp[i]] == 1)
            {
                while (half[comp[i + 1]] == 1 && comp.size() - i > 1)
                {
                    if (comp[i] > comp[i + 1])
                    {
                        half.erase(comp[i + 1]);
                        comp.erase(comp.begin() + i + 1);
                    }
                    else
                    {
                        half.erase(comp[i]);
                        comp.erase(comp.begin() + i);
                    }

                    if (days == comp.size())
                    {
                        flag = 1;
                        break;
                    }

                    count++;
                }

                if (count != 0)
                    i -= flag;

                if (flag == 1)
                    break;
            }
        }
        //
        //
        // Shifting the +1 set to the left by one element.
        for (auto it = half.begin(); it != half.end(); it++)
            if (it->second == 1)
            {
                ind = it->first;
                break;
            }

        for (i = 0; i < comp.size(); i++)
            newsrt.push_back(comp[i]);
        sort(newsrt.begin(), newsrt.end());

        for (i = newsrt.size() - 1; i >= 0; i--)
            if (newsrt[i] < ind)
            {
                half[newsrt[i]] = 1;
                break;
            }
        newsrt.clear();
    }
    //
    //
    // Calculating the sum of the final array.
    for (i = 0; i < comp.size(); i++)
        sum += comp[i];

    cout << "The minimzed complexity is: " << sum;

    return 0;
}

// This code is contributed by HankBoy