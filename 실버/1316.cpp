#include <bits/stdc++.h>
using namespace std;

int n, cnt;
string token;
char arr[100] = {};
bool skip = false;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> token;
        for (int j = 0; j < token.length(); j++)
        {
            arr[j] = token[j];
            for (int k = 0; k < j - 1; k++)
            {
                if (arr[k] == token[j] & arr[k + 1] != token[j])
                {
                    skip = true;
                    break;
                }
            }
            if (skip)
            {
                break;
            }
        }
        if (skip)
        {
            skip = false;
            continue;
        }
        cnt += 1;
    }
    cout << cnt << '\n';
}