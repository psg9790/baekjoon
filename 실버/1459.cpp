#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, w, s;
    cin >> x >> y >> w >> s;

    if (2 * w > s)
    {
        if (x - y < 0)
        {
            cout << x * s + (y - x) * w << '\n';
        }
        else
        {
            cout << y * s + (x - y) * w << '\n';
        }
    }
    else
    {
        cout << (x + y) * w << '\n';
    }
    return 0;
}