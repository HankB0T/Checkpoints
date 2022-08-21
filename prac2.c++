#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    string s = "dog:cat";
    int pos = s.find(":");

    string sub = s.substr(0, 1);

    cout << "String is: " << sub;
    cout << "\nPosition is: " << pos;

    return 0;
}