#include <bits/stdc++.h>
using namespace std;

int num, k, n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> k;
        cin >> n;
        int arr[k + 1][n + 1];
        for (int j = 1; j <= n; j++)
        {
            arr[0][j] = j;
        }

        for (int x = 1; x < k; x++)
        {
            for (int y = 1; y <= n; y++)
            {
                int sum = 0;
                for (int z = 1; z <= y; z++)
                {
                    sum += arr[x - 1][z];
                }
                arr[x][y] = sum;
            }
        }

        if (k > 0)
        {
            int sum = 0;
            for (int x = 1; x <= n; x++)
            {
                sum += arr[k - 1][x];
            }
            cout << sum << '\n';
        }
        else
        {
            cout << arr[k][n] << '\n';
        }
    }
}