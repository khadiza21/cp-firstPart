#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, i = 1, sum = 5;
    for (;;)
    {
        cout << n << " X " << i << " = " << sum << endl;
        sum += n;
        i++;
        if (i > 10)
        {
            break;
        }
    }

    return 0;
}
