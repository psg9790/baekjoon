#include <bits/stdc++.h>
using namespace std;

int n;
long long fibo[91];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    cout << fibo[n] << '\n';
}