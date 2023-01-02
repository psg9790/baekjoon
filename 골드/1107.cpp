#include <bits/stdc++.h>
using namespace std;

string targetchannel;
int brokens;
bool buttons[10] = {
    true,
};

int find_lower_chan(string target)
{
    // 작은 버튼중에 가장 큰거, 없으면 제일 큰 버튼
    // 10 자리부터는 0 가능
    stack<int> stk;
    for (int i = 0; i < target.length(); i++)
    {
        stk.push((int)(target[i] - '0'));
    }

    int ret = 0;
    int times = 1;
    bool brokenrule = false;
    while (!stk.empty())
    {
        int token = stk.top();
        stk.pop();

        bool found = false;

        if (!brokenrule)
        {
            for (int i = token; i >= 0; i--)
            {
                if (buttons[i] == true)
                {
                    ret += times * i;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                brokenrule = true;
            }
        }

        if (brokenrule)
        {
            for (int i = 9; i >= 0; i--)
            {
                if (buttons[i] == true)
                {
                    ret += times * i;
                    break;
                }
            }
        }

        times *= 10;
    }
}
int find_higher_chan(string target)
{
    // 보다 큰 버튼 중 제일 작은거, 없다면 제일 작은 버튼
    // 끝까지 작은 버튼을 골랐을 땐 1 자리수를 더함
    queue<int> q;
    int brokenrule = -1;
    for (int i = target.length() - 1; i >= 0; i--)
    {
        int token = (int)(target[i] - '0');

        int found = false;
        for (int j = token; j <= 9; j++)
        {
            if (buttons[j] == true)
            {
                found = true;
                q.push(i);
                break;
            }
        }
        if (found)
        {
            continue;
        }

        brokenrule = i;
    }

    int ret = 0;
    int times = 1;
    if (brokenrule == -1)
    {
        int cnt = q.size();
        while (!q.empty())
        {
            ret += q.front() * times;
            q.pop();
            times *= 10;
        }
    }
    else
    {
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> targetchannel;
    cin >> brokens;
    for (int i = 0; i < brokens; i++)
    {
        int token;
        cin >> token;
        buttons[token] = false;
    }
}