#include <bits/stdc++.h>
using namespace std;

int n;
int args;
stack<int> lft, rgt;
stack<int> mid;
int high;

int checkStack(int _arg)
{
    int rtn = -1;

    while (mid.size() > 0)
    {
        if (mid.top() > _arg)
        {
            rtn = mid.top();
            break;
        }
        else
        {
            mid.pop();
        }
    }

    mid.push(_arg);
    return rtn;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> args;
        lft.push(args);
    }

    for (int i = 0; i < n; i++)
    {
        rgt.push(checkStack(lft.top()));
        lft.pop();
    }

    while (rgt.size() > 0)
    {
        cout << rgt.top() << ' ';
        rgt.pop();
    }
}