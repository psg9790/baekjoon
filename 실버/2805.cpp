#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> woods;
int mini = 0;
int maxi = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int token;
        cin >> token;
        woods.push_back(token);
        if (token > maxi)
        {
            maxi = token;
        }
    }

    int sum_w;
    int half;
    while (true)
    {
        sum_w = 0;
        // cout << mini << ' ' << half << ' ' << maxi << '\n';
        half = (int)((maxi + mini) / 2);
        // n개 나무에 대해 자른 나무 합
        for (int i = 0; i < n; i++)
        {
            int calc = woods[i] - half;
            sum_w += calc > 0 ? calc : 0;
            // 나무합이 m보다 크면 mini=half+1
        }
        if (mini == maxi)
        {
            break;
        }
        if (sum_w == m)
        {
            break;
        }

        if (sum_w > m)
        {
            if (half + 1 > maxi)
            {
                mini = maxi;
            }
            else
            {
                mini = half;
            }
        }
        // 나무합이 m보다 작으면 maxi=half-1
        else if (sum_w < m)
        {
            if (half - 1 < mini)
            {
                maxi = mini;
            }
            else
            {
                maxi = half - 1;
            }
        }
        // 나무합 일치하면 탈출
    }
    cout << half << '\n';
}