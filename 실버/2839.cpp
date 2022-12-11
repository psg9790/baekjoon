#include <bits/stdc++.h>
using namespace std;

int n;
int arr[5001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    arr[3] = arr[5] = 1;
    for (int i = 6; i <= n; i++)
    {
        if (arr[i - 3] > 0 & arr[i - 5] > 0)
        {
            arr[i] = min(arr[i - 3] + 1, arr[i - 5] + 1);
        }
        else if (arr[i - 3] > 0)
        {
            arr[i] = arr[i - 3] + 1;
        }
        else if (arr[i - 5] > 0)
        {
            arr[i] = arr[i - 5] + 1;
        }
    }

    if (arr[n] != 0)
    {
        cout << arr[n] << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
}