#include <bits/stdc++.h>
using namespace std;

int x, y, w, h;
int mini = 1000;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> x >> y >> w >> h;

    if (x <= mini)
    {
        mini = x;
    }
    if (y <= mini)
    {
        mini = x;
    }
    if (w - x <= mini)
    {
        mini = w - x;
    }
    if (h - y <= mini)
    {
        mini = h - y;
    }
    cout << mini << '\n';
}