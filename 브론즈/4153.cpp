#include <bits/stdc++.h>
using namespace std;

int x, y, z;
bool isright = false;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true)
    {
        cin >> x >> y >> z;

        if (x == 0 & y == 0 & z == 0)
        {
            return 0;
        }

        if (x >= y & x >= z)
        {
            if ((y * y + z * z) == x * x)
            {
                isright = true;
            }
        }
        else if (y >= x & y >= z)
        {
            if ((x * x + z * z) == y * y)
            {
                isright = true;
            }
        }
        else if (z >= x & z >= y)
        {
            if ((x * x + y * y) == z * z)
            {
                isright = true;
            }
        }
        if (isright)
        {
            cout << "right" << '\n';
        }
        else
        {
            cout << "wrong" << '\n';
        }
        isright = false;
    }
}