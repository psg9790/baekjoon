#include <bits/stdc++.h>
using namespace std;

int k, n;
vector<long> lans;
long long mini = 1;
long long maxi = 1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> k >> n;

    for (int i = 0; i < k; i++)
    {
        long token;
        cin >> token;
        lans.push_back(token);
        if (token > maxi)
        {
            maxi = token;
        }
    }

    long res = 0;
    while (mini <= maxi)
    {
        long long half = ((mini + maxi) / 2);

        long long lcnt = 0;
        for (int i = 0; i < lans.size(); i++)
        {
            lcnt += (lans[i] / half);
        }

        if (lcnt < n)
        {
            maxi = half - 1;
        }
        else
        {
            res = half;
            mini = half + 1;
        }
    }
    cout << res << '\n';
}