#include <bits/stdc++.h>
using namespace std;

int N, K;
int token;

long long value[100'001]; // 무게 W일 때 가치

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    cin >> K;
    for (int i = 1; i <= N; i++)
    {
        cin >> token;
        cin >> value[token];
        for (int j = 1; j <= K; j++)
        {
            if (value[j] != 0)
            {
                if (j != token)
                {
                    if (j + token <= K)
                    {
                        value[j + token] = value[j] + value[token];
                    }
                }
            }
        }
    }

    int maximum = 0;
    for (int i = K; i >= 1; i--)
    {
        if (value[i] > 0)
        {
            if (maximum < value[i])
            {
                maximum = value[i];
            }
        }
    }
    cout << maximum << '\n';
}