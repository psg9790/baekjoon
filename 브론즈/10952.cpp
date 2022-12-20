#include <bits/stdc++.h>
using namespace std;

int a, b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true)
    {
        cin >> a >> b;
        if (a == 0 & b == 0)
        {
            break;
        }
        else
        {
            cout << a + b << '\n';
        }
    }
}