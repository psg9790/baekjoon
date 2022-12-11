#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr;

int c = 1;
int ptr;
vector<int> stk;
vector<int> rst;

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
        arr.push_back(token);
    }

    while (true)
    {
        if (stk.size() > 0)
        {
            if (stk[stk.size() - 1] == arr[ptr])
            {
                // pop
                stk.erase(stk.begin() + stk.size() - 1);
                rst.push_back(0);
                ptr++;
                if (ptr == arr.size())
                {
                    break;
                }
            }
            else
            {
                // push
                stk.push_back(c);
                rst.push_back(1);
                c++;
            }
            if (stk[stk.size() - 1] > arr[ptr])
            {
                cout << "NO" << '\n';
                return 0;
            }
        }
        else
        {
            // push
            stk.push_back(c);
            rst.push_back(1);
            c++;
        }
    }

    for (int i = 0; i < rst.size(); i++)
    {
        if (rst[i] == 1)
        {
            cout << '+' << '\n';
        }
        else
        {
            cout << '-' << '\n';
        }
    }
    return 0;
}