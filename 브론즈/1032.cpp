#include <bits/stdc++.h>
using namespace std;

int n;
char buffer[51] = {0};
char inLine[51] = {0};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> inLine;
        if (i == 0)
        {
            memcpy(buffer, inLine, sizeof(inLine));
        }
        for (int j = 0; j <= 50; j++)
        {
            if (buffer[j] != 0)
            {
                if (buffer[j] != inLine[j])
                {
                    buffer[j] = '?';
                }
            }
        }
    }
    cout << buffer << '\n';
}