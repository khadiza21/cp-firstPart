#include <bits/stdc++.h>
using namespace std;
int main()
{

    char ch, value;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        value = true;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        value = false;
    }

    if (value == 1)
    {
        cout << ch << " is uppercase! " << endl;
    }
    else
    {
        cout << ch << " is lowercase! " << endl;
    }

    return 0;
}