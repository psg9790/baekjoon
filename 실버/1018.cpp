#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> arr;

int paintB(int x, int y)
{
    int ret = 0;
    for (int j = 0; j < 8; j++)
    {
        for (int i = 0; i < 8; i++)
        {
            if ((i + j) % 2 == 0)
            {
                if (arr[y + j][x + i] == 'W')
                {
                    ret += 1;
                }
            }
            else
            {
                if (arr[y + j][x + i] == 'B')
                {
                    ret += 1;
                }
            }
        }
    }
    return ret;
}
int paintW(int x, int y)
{
    int ret = 0;
    for (int j = 0; j < 8; j++)
    {
        for (int i = 0; i < 8; i++)
        {
            if ((i + j) % 2 == 0)
            {
                if (arr[y + j][x + i] == 'B')
                {
                    ret += 1;
                }
            }
            else
            {
                if (arr[y + j][x + i] == 'W')
                {
                    ret += 1;
                }
            }
        }
    }
    return ret;
}

int minpaint = 64;
int pB, pW;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string token;
        cin >> token;
        arr.push_back(token);
    }

    for (int j = 0; j <= n - 8; j++)
    {
        for (int i = 0; i <= m - 8; i++)
        {
            // cout << "check pos x : " << i << " y: " << j << '\n';
            pB = paintB(i, j);
            pW = paintW(i, j);

            if (pB < minpaint)
            {
                minpaint = pB;
            }
            if (pW < minpaint)
            {
                minpaint = pW;
            }
        }
    }
    cout << minpaint << '\n';
}