#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    int cost[n];
    int col_cost[n + 1][3] = {0};

    // 1번 거리는 그냥 일단 칠함
    cin >> col_cost[1][0] >> col_cost[1][1] >> col_cost[1][2];
    // 2번 거리부터 dp
    for (int i = 2; i <= n; i++)
    {
        cin >> cost[0] >> cost[1] >> cost[2];

        // 이전 colored 인덱스
        for (int j = 0; j < 3; j++)
        {
            // 입력받은 거리의 paint cost 인덱스
            for (int k = 0; k < 3; k++)
            {
                if (j != k)
                {
                    // 색 칠해서 더 작은 값을 현재 인덱스에 넣기
                    // j 인덱스가 칠한 RGB 인덱스
                    if (col_cost[i][k] > col_cost[i - 1][j] + cost[k])
                    {
                        col_cost[i][k] = col_cost[i - 1][j] + cost[k];
                    }
                    else if (col_cost[i][k] == 0)
                    {
                        col_cost[i][k] = col_cost[i - 1][j] + cost[k];
                    }
                }
            }
        }
    }

    int mini;
    for (int i = 0; i < 3; i++)
    {
        if (mini > col_cost[n][i])
        {
            mini = col_cost[n][i];
        }
        else if (mini == 0)
        {
            mini = col_cost[n][i];
        }
    }
    cout << mini << '\n';
}