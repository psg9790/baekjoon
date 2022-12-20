#include <bits/stdc++.h>
using namespace std;

int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int m, n, k;
        cin >> m >> n >> k;
        bool arr[n * m] = {
            false,
        };
        for (int j = 0; j < k; j++)
        {
            int xpos, ypos;
            cin >> xpos >> ypos;
            arr[xpos + ypos * m] = true;
        }

        int cnt = 0;
        for (int y = 0; y < n; y++)
        {
            for (int x = 0; x < m; x++)
            {
                if (arr[x + y * m] == true)
                {
                    arr[x + y * m] = false;
                    cnt += 1;
                    queue<int> neigh4;
                    neigh4.push(x + y * m);
                    do
                    {
                        int idx = neigh4.front();
                        neigh4.pop();
                        // cout << idx << ' ';

                        if (idx % m > 0)
                        {
                            if (arr[idx - 1] == true)
                            {
                                arr[idx - 1] = false;
                                neigh4.push(idx - 1);
                            }
                        }
                        if (idx % m < m - 1)
                        {
                            if (arr[idx + 1] == true)
                            {
                                arr[idx + 1] = false;
                                neigh4.push(idx + 1);
                            }
                        }
                        if ((int)(idx / m) > 0)
                        {
                            if (arr[idx - m] == true)
                            {
                                arr[idx - m] = false;
                                neigh4.push(idx - m);
                            }
                        }
                        if ((int)(idx / m) < n - 1)
                        {
                            if (arr[idx + m] == true)
                            {
                                arr[idx + m] = false;
                                neigh4.push(idx + m);
                            }
                        }
                    } while (!neigh4.empty());
                    // cout << '\n';
                }
            }
        }
        cout << cnt << '\n';
    }
}