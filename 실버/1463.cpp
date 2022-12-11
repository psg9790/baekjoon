#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1'000'001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    arr[2] = arr[3] = 1;
    for (int i = 4; i <= n; i++)
    {
        arr[i] = arr[i - 1] + 1;

        if (i % 2 == 0)
        {
            arr[i] = min(arr[i], arr[i / 2] + 1);
        }
        if (i % 3 == 0)
        {
            arr[i] = min(arr[i], arr[i / 3] + 1);
        }
    }
    cout << arr[n] << '\n';
}