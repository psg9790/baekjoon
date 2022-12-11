#include <bits/stdc++.h>
using namespace std;

string a, b;
int A, B;

int powers(int n)
{
    int ret = 1;
    for (int i = 0; i < n; i++)
    {
        ret *= 10;
    }
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;

    for (int i = 0; i < a.length(); i++)
    {
        A += (int(a[i]) - '0') * powers(i);
    }
    for (int i = 0; i < b.length(); i++)
    {
        B += (int(b[i]) - '0') * powers(i);
    }

    cout << (A > B ? A : B) << '\n';
}