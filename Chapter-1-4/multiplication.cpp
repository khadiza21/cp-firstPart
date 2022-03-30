#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1; i <= 20; i++)
    {
        cout << "Multiplication of " << i << endl;
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " X " << j << " = " << i * j << endl;
        }
        cout << endl
             << endl;
    }

    return 0;
}