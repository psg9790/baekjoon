#include <bits/stdc++.h>
using namespace std;

int n, sum;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << '\n';
}