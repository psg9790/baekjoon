#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[12];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        for (int j = 4; j <= m; j++)
        {
            arr[j] = arr[j - 3] + arr[j - 2] + arr[j - 1];
        }
        cout << arr[m] << '\n';
    }
}