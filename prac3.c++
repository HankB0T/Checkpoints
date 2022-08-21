#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, index;
    string str;
    char ch[100];

    cout << "Enter the string: ";
    cin >> str;

    for (i = 0; i < str.size(); i++)
        ch[i] = str[i];

    int *count = new int(256);
    for (i = 0; i < 256; i++)
        count[i] = 0;

    for (i = 0; *(ch + i); i++)
        count[*(ch + i)]++;

    for (i = 0; *(ch + i); i++)
        if (count[*(ch + i)] == 1)
        {
            index = i;
            break;
        }

    cout << "The first non-repeating character is: " << ch[index];
    delete count;

    return 0;
}