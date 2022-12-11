#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> w;
vector<int> h;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int _x, _h;
        cin >> _x >> _h;
        w.push_back(_x);
        h.push_back(_h);
    }

    for (int i = 0; i < n; i++)
    {
        int rank = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (w[j] > w[i] & h[j] > h[i])
                {
                    rank += 1;
                }
            }
        }
        cout << rank << ' ';
    }
    cout << '\n';
}