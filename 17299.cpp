#include <bits/stdc++.h>
using namespace std;

int n, ipt;
stack<int> lft, rgt;
stack<int> mid;
int NGF[1'000'001];

int checkStk(int _arg)
{
    int rtn = -1;

    while (mid.size() > 0)
    {
        if (NGF[mid.top()] > NGF[_arg])
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
        cin >> ipt;
        NGF[ipt] = NGF[ipt] + 1;
        lft.push(ipt);
    }

    for (int i = 0; i < n; i++)
    {
        rgt.push(checkStk(lft.top()));
        lft.pop();
    }

    while (rgt.size() > 0)
    {
        cout << rgt.top() << ' ';
        rgt.pop();
    }
}