#include <bits/stdc++.h>
using namespace std;

int year;

int main()
{
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            cout << 1 << '\n';
            return 0;
        }
    }
    if (year % 400 == 0)
    {
        cout << 1 << '\n';
        return 0;
    }

    cout << 0 << '\n';
    return 0;
}