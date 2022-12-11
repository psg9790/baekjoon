#include <bits/stdc++.h>
using namespace std;

int n;
int level, sum;
int main()
{
    cin >> n;
    while (true)
    {
        sum += level;
        if (sum > n)
        {
            sum -= level;
            level--;
            break;
        }
        level++;
    }

    int idx = n - sum;
    if (level % 2 == 0)
    {
        if (idx == 0)
        {
            // 이전 마지막
            cout << level << '/' << 1 << '\n';
        }
        else
        {
            // 인덱스++
            cout << level + 1 - (idx - 1) << '/' << 1 + (idx - 1) << '\n';
        }
    }
    else
    {
        if (idx == 0)
        {
            // 이전 마지막
            cout << 1 << '/' << level << '\n';
        }
        else
        {
            // 인덱스++
            cout << 1 + (idx - 1) << '/' << level + 1 - (idx - 1) << '\n';
        }
    }
}
