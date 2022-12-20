#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> woods;
int mini = 0;
int maxi = 0;

long long cutwoods(int h)
{
    long long ret = 0;
    for (int i = 0; i < woods.size(); i++)
    {
        int collectw = woods[i] - h;
        ret += (collectw > 0 ? collectw : 0);
    }
    return ret;
}

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

    int res;
    while (mini <= maxi)
    {
        int half = (int)((maxi + mini) / 2);

        long long sum_w = cutwoods(half);

        if (sum_w < m)
        {
            // 나무를 더 캐야 하므로
            maxi = half - 1;
        }
        else
        {
            // 나무를 덜 캐야 하므로
            res = half;
            mini = half + 1;
        }

        // cout << "half: " << half << " next min: " << mini << " next maxi: " << maxi << '\n';
    }
    cout << res << '\n';
}