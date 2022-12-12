#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;

    float sum = 1;
    for (int i = 1; i < n; i++)
    {
        sum += (float)1 / n;
    }
    cout << sum * n << '\n';
}