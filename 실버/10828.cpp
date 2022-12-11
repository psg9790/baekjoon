#include <bits/stdc++.h>
using namespace std;

int n;
string cmd;
int args;
stack<int> stk;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> cmd;
        if (!cmd.compare("push"))
        {
            cin >> args;
            stk.push(args);
        }
        else if (!cmd.compare("pop"))
        {
            if (stk.size() > 0)
            {

                cout << stk.top() << '\n';
                stk.pop();
            }
            else
            {
                cout << -1 << '\n';
            }
        }
        else if (!cmd.compare("size"))
        {
            cout << stk.size() << '\n';
        }
        else if (!cmd.compare("empty"))
        {
            if (stk.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (!cmd.compare("top"))
        {
            if (stk.size() > 0)
            {

                cout << stk.top() << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
    }
}