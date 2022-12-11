#include <bits/stdc++.h>
using namespace std;

int n, m;
int zero[41];
int one[41];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        zero[0] = 1;
        zero[1] = 0;
        one[0] = 0;
        one[1] = 1;

        for (int j = 2; j <= m; j++)
        {
            zero[j] = zero[j - 2] + zero[j - 1];
            one[j] = one[j - 2] + one[j - 1];
        }
        cout << zero[m] << ' ' << one[m] << '\n';
    }
}