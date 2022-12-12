#include <bits/stdc++.h>
using namespace std;

int nodecount = 0;
int k, h, q;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> k >> h >> q;

    for (int i = 1; i <= h; i++)
    {
        nodecount += 2 * (int)pow(3, i - 1);
    }

    int arr[nodecount + 1] = {};

    for (int i = 0; i < h; i++)
    {
        for (int j = 1; j <= nodecount; j++)
        {
            if (i == 0)
            {
                arr[j] = h;
            }
            else
            {
                if (j % (int)pow(k + 1, i) == 0)
                {
                    arr[j] = h - i;
                }
            }
        }
    }

    for (int i = 0; i < q; i++)
    {
        int lft, rgt;
        cin >> lft >> rgt;
        if (lft <= nodecount & rgt <= nodecount)
        {
            int starti = arr[lft];
            int endi = arr[rgt];
            int mini = h;
            for (int j = lft; j <= rgt; j++)
            {
                if (arr[j] < mini)
                {
                    mini = arr[j];
                }
            }
            if (lft == rgt)
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << 2 + (starti - mini) + (endi - mini) << '\n';
            }
        }
        else
        {
            cout << -1 << '\n';
        }
    }
}