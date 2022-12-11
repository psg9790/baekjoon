#include <bits/stdc++.h>
using namespace std;

int n;

bool Check(string _str)
{
    int len = (int)_str.length();
    stack<char> stk;

    for (int i = 0; i < len; i++)
    {
        if (_str[i] == '(')
        {
            stk.push('(');
        }
        else
        {
            if (!stk.empty())
            {
                stk.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return stk.empty();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string token;
        cin >> token;
        if (Check(token))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}