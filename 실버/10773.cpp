#include <bits/stdc++.h>
using namespace std;

int n;
stack<int> zero;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int token;
        cin >> token;
        if (token == 0)
        {
            if (!zero.empty())
            {
                zero.pop();
            }
        }
        else
        {
            zero.push(token);
        }
    }

    int summation = 0;
    while (!zero.empty())
    {
        summation += zero.top();
        zero.pop();
    }
    cout << summation << '\n';
}