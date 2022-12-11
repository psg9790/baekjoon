#include <bits/stdc++.h>
using namespace std;
int m, n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> m >> n;
    cout << (int)(m / n) << '\n';
    cout << m % n << '\n';
}