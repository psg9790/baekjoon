#include <bits/stdc++.h>
using namespace std;

int maxi = -1'000'000;
int mini = 1'000'000;
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int token;
        cin >> token;
        if (token < mini)
        {
            mini = token;
        }
        if (token > maxi)
        {
            maxi = token;
        }
    }
    cout << mini << ' ' << maxi << '\n';
}